// Traction.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Traction.h"
#include "afxdialogex.h"
#include "CompensationChain.h"
#include "WrapAngle.h"
#include "Groove.h"
// CTraction dialog

IMPLEMENT_DYNAMIC(CTraction, CDialogEx)

CTraction::CTraction(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTraction::IDD, pParent)
	, m_q(0)
	, m_p(0)
	, m_v(0)
	, m_h(0)
	, m_psi(0)
	, m_gn(0)
	, m_a(0)
	, m_r(0)
	, m_qs(0)
	, m_dr(0)
	, m_ns(0)
	, m_qc(0)
	, m_nc(0)
	, m_mc(0)
	, m_qtcwt(0)
	, m_qt(0)
	, m_nt(0)
	, m_alpha(0)
	, m_beta(0)
	, m_gama(0)
	, m_miu1(0)
	, m_miu2(0)
	, m_miu3(0)
	, m_f1(0)
	, m_f2(0)
	, m_f3(0)
	, m_ef1(0)
	, m_ef2(0)
	, m_ef3(0)
	, m_mdp(0)
	, m_mmdp(0)
	, m_npcar(0)
	, m_mpcar(0)
	, m_mmpcar(0)
	, m_npcwt(0)
	, m_mpcwt(0)
	, m_mmpcwt(0)
	, m_nptd(0)
	, m_mptd(0)
	, m_mmptd(0)
	, m_ddr(0)
	, m_dtdr(0)
	, m_sf(0)
	, m_sa(0)
	, m_pp(0)
	, m_rope(0)
	, m_chain(0)
	, m_cable(0)
{
	m_w_radio=0;
	m_w_dt = 410;
	m_w_ddp=400;
	m_w_la=303;
	m_w_h1=702;
	m_w_alpha2=m_alpha*pi/180;
	m_w_way = "单绕";
	strWeb = "半圆槽";
	strPro = "硬化处理";
	strPos = "对重侧";
	strSel = "轿厢侧";
}

CTraction::~CTraction()
{
}

void CTraction::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Q, m_q);
	DDV_MinMaxDouble(pDX, m_q, 0, 1e+30);
	DDX_Text(pDX, IDC_P, m_p);
	DDV_MinMaxDouble(pDX, m_p, 0, 1e+30);
	DDX_Text(pDX, IDC_V, m_v);
	DDV_MinMaxDouble(pDX, m_v, 0, 1e+30);
	DDX_Text(pDX, IDC_H, m_h);
	DDV_MinMaxDouble(pDX, m_h, 0, 1e+30);
	DDX_Text(pDX, IDC_PSI, m_psi);
	DDV_MinMaxDouble(pDX, m_psi, 0, 1);
	DDX_Text(pDX, IDC_GN, m_gn);
	DDV_MinMaxDouble(pDX, m_gn, 0, 1e+30);
	DDX_Text(pDX, IDC_A, m_a);
	DDV_MinMaxDouble(pDX, m_a, 0, 1e+30);
	DDX_Text(pDX, IDC_R, m_r);
	DDV_MinMaxDouble(pDX, m_r, 0, 1e+30);
	DDX_Text(pDX, IDC_QS, m_qs);
	DDV_MinMaxDouble(pDX, m_qs, 0, 1e+30);
	DDX_Text(pDX, IDC_DR, m_dr);
	DDX_Text(pDX, IDC_DR2, m_dr);
	DDV_MinMaxDouble(pDX, m_dr, 0, 1e+30);
	DDX_Text(pDX, IDC_NS, m_ns);
	DDX_Text(pDX, IDC_NS2, m_ns);
	DDV_MinMaxInt(pDX, m_ns, 0, 2147483647);
	DDX_Text(pDX, IDC_NC, m_nc);
	DDV_MinMaxInt(pDX, m_nc, 0, 2147483647);
	DDX_Text(pDX, IDC_MC, m_mc);
	DDV_MinMaxDouble(pDX, m_mc, 0, 1e+30);
	DDX_Text(pDX, IDC_QT2, m_qtcwt);
	DDV_MinMaxDouble(pDX, m_qtcwt, 0, 1e+30);
	DDX_Text(pDX, IDC_QT, m_qt);
	DDV_MinMaxDouble(pDX, m_qt, 0, 1e+30);
	DDX_Text(pDX, IDC_NT, m_nt);
	DDV_MinMaxInt(pDX, m_nt, 0, 2147483647);
	DDX_Control(pDX, IDC_SCTYPE, m_scType);
	DDX_Control(pDX, IDC_PRO, m_pro);
	DDX_Text(pDX, IDC_MIU1, m_miu1);
	DDV_MinMaxDouble(pDX, m_miu1, 0, 1e+30);
	DDX_Text(pDX, IDC_MIU2, m_miu2);
	DDV_MinMaxDouble(pDX, m_miu2, 0, 1e+30);
	DDX_Text(pDX, IDC_MIU3, m_miu3);
	DDV_MinMaxDouble(pDX, m_miu3, 0, 1e+30);
	DDX_Text(pDX, IDC_F1, m_f1);
	DDX_Text(pDX, IDC_F2, m_f2);
	DDX_Text(pDX, IDC_F3, m_f3);
	DDX_Text(pDX, IDC_EF1, m_ef1);
	DDX_Text(pDX, IDC_EF2, m_ef2);
	DDX_Text(pDX, IDC_EF3, m_ef3);
	DDX_Control(pDX, IDC_POS, m_pos);
	DDX_Text(pDX, IDC_MDP, m_mdp);
	DDV_MinMaxDouble(pDX, m_mdp, 0, 1e+30);
	DDX_Text(pDX, IDC_MMDP, m_mmdp);
	DDX_Text(pDX, IDC_NPCAR, m_npcar);
	DDV_MinMaxInt(pDX, m_npcar, 0, 2147483647);
	DDX_Text(pDX, IDC_MPCAR, m_mpcar);
	DDV_MinMaxDouble(pDX, m_mpcar, 0, 1e+30);
	DDX_Text(pDX, IDC_MPCAR2, m_mmpcar);
	DDX_Text(pDX, IDC_NPCWT, m_npcwt);
	DDV_MinMaxInt(pDX, m_npcwt, 0, 2147483647);
	DDX_Text(pDX, IDC_MPCWT, m_mpcwt);
	DDV_MinMaxDouble(pDX, m_mpcwt, 0, 1e+30);
	DDX_Text(pDX, IDC_MPCWT2, m_mmpcwt);
	DDX_Text(pDX, IDC_NPTD, m_nptd);
	DDV_MinMaxInt(pDX, m_nptd, 0, 2147483647);
	DDX_Text(pDX, IDC_MPTD2, m_mptd);
	DDV_MinMaxDouble(pDX, m_mptd, 0, 1e+30);
	DDX_Text(pDX, IDC_MPTD, m_mmptd);
	DDX_Control(pDX, IDC_SEL_POS, m_sel);
	DDX_Control(pDX, IDC_SA, m_esa);
	DDX_Text(pDX, IDC_DR3, m_ddr);
	DDV_MinMaxDouble(pDX, m_ddr, 0, 1e+30);
	DDX_Text(pDX, IDC_DTDR, m_dtdr);
	DDX_Text(pDX, IDC_SF, m_sf);
	DDX_Text(pDX, IDC_SA, m_sa);
	DDX_Text(pDX, IDC_P2, m_pp);
	DDX_Text(pDX, IDC_ROPE, m_rope);
	DDX_Text(pDX, IDC_CHAIN, m_chain);
	DDX_Text(pDX, IDC_CABLE, m_cable);
}


BEGIN_MESSAGE_MAP(CTraction, CDialogEx)
	ON_WM_VSCROLL()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, &CTraction::OnBnClickedButton1)
	ON_CBN_SELCHANGE(IDC_SCTYPE, &CTraction::OnCbnSelchangeSctype)
	ON_BN_CLICKED(IDC_QC, &CTraction::OnBnClickedQc)
	ON_BN_CLICKED(IDC_ALPHA, &CTraction::OnBnClickedAlpha)
	ON_BN_CLICKED(IDC_BETA, &CTraction::OnBnClickedBeta)
	ON_BN_CLICKED(IDC_GAMA, &CTraction::OnBnClickedGama)
	ON_BN_CLICKED(IDC_BTN_CALC, &CTraction::OnBnClickedBtnCalc)
	ON_CBN_SELCHANGE(IDC_PRO, &CTraction::OnCbnSelchangePro)
	ON_CBN_SELCHANGE(IDC_POS, &CTraction::OnCbnSelchangePos)
	ON_CBN_SELCHANGE(IDC_SEL_POS, &CTraction::OnCbnSelchangeSelPos)
	ON_EN_SETFOCUS(IDC_SA, &CTraction::OnEnSetfocusSa)
	ON_BN_CLICKED(IDC_NE, &CTraction::OnBnClickedNe)
END_MESSAGE_MAP()


// CTraction message handlers


void CTraction::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	/*CCompensationChain dlg;
	dlg.DoModal();*/
	CTestDlg dlg;
	dlg.DoModal();
}


//void CTraction::OnEnChangeQc()
//{
//	 TODO:  If this is a RICHEDIT control, the control will not
//	 send this notification unless you override the CDialogEx::OnInitDialog()
//	 function and call CRichEditCtrl().SetEventMask()
//	 with the ENM_CHANGE flag ORed into the mask.
//
//	 TODO:  Add your control notification handler code here
//	CCompensationChain dlg;
//	if (IDOK == dlg.DoModal())
//	{
//		m_qc = _tstof(dlg.qc.GetBuffer());
//	}
//}
//
//
//void CTraction::OnEnSetfocusQc()
//{
//	 TODO: Add your control notification handler code here
//	
//}

void CTraction::ScrollClient(int nBar, int nPos)
{
	static int s_prevx = 1;
	static int s_prevy = 1;

	int cx = 0;
	int cy = 0;

	int& delta = cy;
	int& prev = s_prevy;

	delta = prev - nPos;
	prev = nPos;

	if (cx || cy)
	{
		ScrollWindow(cx, cy, NULL, NULL);
	}
}

int CTraction::GetScrollPos(int nBar, UINT nSBCode)
{
	SCROLLINFO si;
	si.cbSize = sizeof(SCROLLINFO);
	si.fMask = SIF_PAGE | SIF_POS | SIF_RANGE | SIF_TRACKPOS;
	GetScrollInfo(nBar, &si);

	const int minPos = si.nMin;
	const int maxPos = si.nMax - (si.nPage - 1);

	int result = -1;

	switch (nSBCode)
	{
	case SB_LINEUP /*SB_LINELEFT*/:
		result = max(si.nPos - 1, minPos);
		break;
	case SB_LINEDOWN /*SB_LINERIGHT*/:
		result = min(si.nPos + 1, maxPos);
		break;
	case SB_PAGEUP /*SB_PAGELEFT*/:
		result = max(si.nPos - (int)si.nPage, minPos);
		break;
	case SB_PAGEDOWN /*SB_PAGERIGHT*/:
		result = min(si.nPos + (int)si.nPage, maxPos);
		break;
	case SB_THUMBPOSITION:
		// do nothing     
		break;
	case SB_THUMBTRACK:
		result = si.nTrackPos;
		break;
	case SB_TOP /*SB_LEFT*/:
		result = minPos;
		break;
	case SB_BOTTOM /*SB_RIGHT*/:
		result = maxPos;
		break;
	case SB_ENDSCROLL:
		// do nothing     
		break;
	}

	return result;
}

void CTraction::VScrool(int nBar, UINT nSBCode)
{
	const int scrollPos = GetScrollPos(nBar, nSBCode);

	if (scrollPos == -1)
		return;

	SetScrollPos(nBar, scrollPos, TRUE);
	ScrollClient(nBar, scrollPos);
}



void CTraction::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default

	VScrool(SB_VERT, nSBCode);
	CDialogEx::OnVScroll(nSBCode, nPos, pScrollBar);
}



BOOL CTraction::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	CRect rc;
	GetClientRect(&rc);
	//CWnd::SetWindowPos(NULL, rc.left, rc.top, rc.Width(), 300, SWP_NOZORDER | SWP_NOMOVE);
	const SIZE sz = { rc.right - rc.left, rc.bottom - rc.top };

	SCROLLINFO si;
	si.cbSize = sizeof(SCROLLINFO);
	si.fMask = SIF_PAGE | SIF_POS | SIF_RANGE;
	si.nPos = si.nMin = 1;

	//si.nMax = sz.cy*m_page;
	si.nMax = sz.cy;
	si.nMin = 0;
	si.nPage = 300;
	SetScrollInfo(SB_VERT, &si, FALSE);  //此函数将产生一个垂直滚动条
	ShowScrollBar(SB_VERT, TRUE);
	m_scType.AddString(_T("半圆槽"));
	m_scType.AddString(_T("V形槽"));
	m_scType.SetCurSel(0);
	m_pro.AddString(_T("硬化处理"));
	m_pro.AddString(_T("未经硬化"));
	m_pro.SetCurSel(0);
	m_pos.AddString(_T("轿厢侧"));
	m_pos.AddString(_T("对重侧"));
	m_pos.SetCurSel(0);
	m_sel.AddString(_T("轿厢侧"));
	m_sel.AddString(_T("对重侧"));
	m_sel.SetCurSel(0);
	//SetDlgItemText(IDC_SCTYPE, _T("半圆槽"));
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CTraction::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
}

void CTraction::OnCbnSelchangeSctype()
{
	// TODO: Add your control notification handler code here
	
	int nSel;

	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_scType.GetCurSel();
	// 根据选中项索引获取该项字符串   
	m_scType.GetLBText(nSel, strWeb);
	// 将组合框中选中的字符串显示到IDC_SCTYPE编辑框中   
	//SetDlgItemText(IDC_SCTYPE, strWeb);
}


void CTraction::OnOK()
{
	// TODO: Add your specialized code here and/or call the base class

	CDialogEx::OnOK();
}



void CTraction::OnBnClickedQc()
{
	// TODO: Add your control notification handler code here
	
	CCompensationChain dlg;
	if (IDOK == dlg.DoModal())
	{
		SetDlgItemText(IDC_QC, dlg.qc);
		m_qc = _tstof(dlg.qc.GetBuffer());
	}
}


void CTraction::OnBnClickedAlpha()
{
	// TODO: Add your control notification handler code here
	CWrapAngle dlg(m_w_radio,m_w_way, m_w_dt, m_w_ddp, m_w_la, m_w_h1, m_alpha, m_w_alpha2);
	if (IDOK == dlg.DoModal())
	{
		CString str;
		str.Format(_T("%.3f"), dlg.m_alpha1);
		SetDlgItemText(IDC_ALPHA, str);
		m_w_radio = dlg.m_radio1;
		m_alpha = dlg.m_alpha1;
		m_w_dt = dlg.m_dt;
		m_w_ddp = dlg.m_ddp;
		m_w_la = dlg.m_la;
		m_w_h1 = dlg.m_h1;
		m_w_alpha2 = dlg.m_alpha2;
		m_w_way = dlg.strWay;
	}
}


void CTraction::OnBnClickedBeta()
{
	// TODO: Add your control notification handler code here
	CGroove dlg(strWeb);
	if (IDOK == dlg.DoModal())
	{
		SetDlgItemText(IDC_BETA, dlg.beta);
		m_beta = _tstof(dlg.beta.GetBuffer());
		SetDlgItemText(IDC_GAMA, dlg.gama);
		m_beta = _tstof(dlg.gama.GetBuffer());
	}
}


void CTraction::OnBnClickedGama()
{
	// TODO: Add your control notification handler code here
	CGroove dlg(strWeb);
	if (IDOK == dlg.DoModal())
	{
		SetDlgItemText(IDC_BETA, dlg.beta);
		m_beta = _tstof(dlg.beta.GetBuffer());
		SetDlgItemText(IDC_GAMA, dlg.gama);
		m_beta = _tstof(dlg.gama.GetBuffer());
	}
}


void CTraction::OnBnClickedBtnCalc()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	double r_beta = m_beta / pi * 180;
	double r_gama = m_gama / pi * 180;
	double r_alpha = m_alpha / pi * 180;
	m_miu2 = 0.1 / (1+m_r*m_v/10);
	if (strWeb == "半圆槽")
	{
		m_f1 = m_miu1 * 4 * (cos(r_gama / 2) - sin(r_beta / 2)) / (pi-r_beta-r_gama-sin(r_beta)+sin(r_gama));
		m_f2 = m_miu2 * 4 * (cos(r_gama / 2) - sin(r_beta / 2)) / (pi - r_beta - r_gama - sin(r_beta) + sin(r_gama));
		m_f3 = m_miu3 * 4 * (cos(r_gama / 2) - sin(r_beta / 2)) / (pi - r_beta - r_gama - sin(r_beta) + sin(r_gama));
	}
	else if (strWeb == "V形槽")
	{
		m_f1 = (strPro == "硬化处理") ? (m_miu1 / sin(r_gama / 2)) : 4 * m_miu1*(1 - sin(r_beta / 2) / (pi - r_beta - sin(r_beta)));
		m_f2 = (strPro == "硬化处理") ? (m_miu2 / sin(r_gama / 2)) : 4 * m_miu2*(1 - sin(r_beta / 2) / (pi - r_beta - sin(r_beta)));
		m_f3 = (strPro == "硬化处理") ? (m_miu3 / sin(r_gama / 2)) : 4 * m_miu3*(1 - sin(r_beta / 2) / (pi - r_beta - sin(r_beta)));
	}
	else
	{
		m_f1 = 0;
		m_f1 = 0;
		m_f1 = 0;
	}
	m_ef1 = exp(m_f1*r_alpha);
	m_ef2 = exp(m_f2*r_alpha);
	m_ef3 = exp(m_f3*r_alpha);
	m_mmdp = 0.6*m_mdp;
	m_mmpcar = m_npcar*0.6*m_mpcar;
	m_mmpcwt = m_npcwt*0.6*m_mpcwt;
	m_mmptd = m_nptd*0.6*m_mptd;

	OnPaint();
	UpdateData(FALSE);
}


void CTraction::OnCbnSelchangePro()
{
	// TODO: Add your control notification handler code here
	int nSel;

	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_scType.GetCurSel();
	// 根据选中项索引获取该项字符串   
	m_pro.GetLBText(nSel, strPro);
}


void CTraction::OnCbnSelchangePos()
{
	// TODO: Add your control notification handler code here
	int nSel;

	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_scType.GetCurSel();
	// 根据选中项索引获取该项字符串   
	m_pos.GetLBText(nSel, strPos);
}



void CTraction::OnCbnSelchangeSelPos()
{
	// TODO: Add your control notification handler code here
	int nSel;

	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_scType.GetCurSel();
	// 根据选中项索引获取该项字符串   
	m_sel.GetLBText(nSel, strSel);
}


void CTraction::OnEnSetfocusSa()
{
	// TODO: Add your control notification handler code here
	//提示气泡
	m_esa.ShowBalloonTip(
		_T("USER"),
		_T("见7588的9.2.2，只计算4.1"),
		TTI_INFO);
	
}


void CTraction::OnBnClickedNe()
{
	// TODO: Add your control notification handler code here
}
