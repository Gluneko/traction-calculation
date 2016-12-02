// Traction.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Traction.h"
#include "afxdialogex.h"
#include "CompensationChain.h"
#include "WrapAngle.h"
#include "Groove.h"
#include "Diameter.h"
#include "SafetyFactor.h"
#include "math.h"
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
	, m_dt(0)
	, m_fmax(0)
	, m_t10(0)
	, m_t20(0)
	, m_t11(0)
	, m_t21(0)
	, m_t1dt21(0)
	, m_t1mt21(0)
	, m_t121(0)
	, m_t221(0)
	, m_t1dt221(0)
	, m_t1mt221(0)
	, m_t122(0)
	, m_t222(0)
	, m_t1dt222(0)
	, m_t1mt222(0)
	, m_t123(0)
	, m_t223(0)
	, m_t1dt223(0)
	, m_t1mt223(0)
	, m_t124(0)
	, m_t224(0)
	, m_t1dt224(0)
	, m_t1mt224(0)
	, m_t131(0)
	, m_t231(0)
	, m_t1dt231(0)
	, m_t1mt231(0)
	, m_t132(0)
	, m_t232(0)
	, m_t1dt232(0)
	, m_t1mt232(0)
	, m_t141(0)
	, m_t242(0)
	, m_p4(0)
	, m_t112(0)
	, m_t212(0)
	, m_t1dt212(0)
	, m_t1mt212(0)
	, m_mc1(0)
	, m_mc2(0)
	, m_mc3(0)
	, m_mc4(0)
	, m_res(_T(""))
	, m_num(0)
	, m_ropeRes(_T(""))
	, m_pRes(_T(""))
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
	m_ne = 0;
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
	DDX_Text(pDX, IDC_DTDR, m_dtdr);
	DDX_Text(pDX, IDC_SF, m_sf);
	DDX_Text(pDX, IDC_SA, m_sa);
	DDX_Text(pDX, IDC_P2, m_pp);
	DDX_Text(pDX, IDC_ROPE, m_rope);
	DDX_Text(pDX, IDC_CHAIN, m_chain);
	DDX_Text(pDX, IDC_CABLE, m_cable);
	DDX_Text(pDX, IDC_DT, m_dt);
	DDV_MinMaxDouble(pDX, m_dt, 0, 1e+30);
	DDX_Control(pDX, IDC_FMAX, m_efmax);
	DDX_Text(pDX, IDC_FMAX, m_fmax);
	DDX_Text(pDX, IDC_T10, m_t10);
	DDX_Text(pDX, IDC_T20, m_t20);
	DDX_Text(pDX, IDC_T11, m_t11);
	DDX_Text(pDX, IDC_T12, m_t21);
	DDX_Text(pDX, IDC_T1DT21, m_t1dt21);
	DDX_Text(pDX, IDC_T1MT21, m_t1mt21);
	DDX_Text(pDX, IDC_T13, m_t121);
	DDX_Text(pDX, IDC_T14, m_t221);
	DDX_Text(pDX, IDC_T1DT22, m_t1dt221);
	DDX_Text(pDX, IDC_T1MT22, m_t1mt221);
	DDX_Text(pDX, IDC_T15, m_t122);
	DDX_Text(pDX, IDC_T16, m_t222);
	DDX_Text(pDX, IDC_T1DT23, m_t1dt222);
	DDX_Text(pDX, IDC_T1MT23, m_t1mt222);
	DDX_Text(pDX, IDC_T17, m_t123);
	DDX_Text(pDX, IDC_T18, m_t223);
	DDX_Text(pDX, IDC_T1DT24, m_t1dt223);
	DDX_Text(pDX, IDC_T1MT24, m_t1mt223);
	DDX_Text(pDX, IDC_T19, m_t124);
	DDX_Text(pDX, IDC_T21, m_t224);
	DDX_Text(pDX, IDC_T1DT25, m_t1dt224);
	DDX_Text(pDX, IDC_T1MT25, m_t1mt224);
	DDX_Text(pDX, IDC_T22, m_t131);
	DDX_Text(pDX, IDC_T23, m_t231);
	DDX_Text(pDX, IDC_T1DT26, m_t1dt231);
	DDX_Text(pDX, IDC_T1MT26, m_t1mt231);
	DDX_Text(pDX, IDC_T24, m_t132);
	DDX_Text(pDX, IDC_T25, m_t232);
	DDX_Text(pDX, IDC_T1DT27, m_t1dt232);
	DDX_Text(pDX, IDC_T1MT27, m_t1mt232);
	DDX_Text(pDX, IDC_EDIT28, m_t141);
	DDX_Text(pDX, IDC_EDIT29, m_t242);
	DDX_Text(pDX, IDC_EDIT11, m_p4);
	DDX_Text(pDX, IDC_T26, m_t112);
	DDX_Text(pDX, IDC_T27, m_t212);
	DDX_Text(pDX, IDC_T1DT28, m_t1dt212);
	DDX_Text(pDX, IDC_T1MT28, m_t1mt212);
	DDX_Text(pDX, IDC_MC1, m_mc1);
	DDX_Text(pDX, IDC_MC2, m_mc2);
	DDX_Text(pDX, IDC_MC3, m_mc3);
	DDX_Text(pDX, IDC_MC4, m_mc4);
	DDX_Control(pDX, IDC_MC1, m_emc1);
	DDX_Text(pDX, IDC_RES11, m_res11);
	DDX_Text(pDX, IDC_RES12, m_res12);
	DDX_Text(pDX, IDC_RES13, m_res21);
	DDX_Text(pDX, IDC_RES14, m_res22);
	DDX_Text(pDX, IDC_RES15, m_res23);
	DDX_Text(pDX, IDC_RES16, m_res24);
	DDX_Text(pDX, IDC_RES17, m_res31);
	DDX_Text(pDX, IDC_RES18, m_res32);
	DDX_Text(pDX, IDC_RES19, m_res41);
	DDX_Text(pDX, IDC_RES20, m_res43);
	DDX_Text(pDX, IDC_SAFE_RES, m_safeRes);
	DDX_Text(pDX, IDC_RESULT, m_res);
	DDX_Text(pDX, IDC_NUM, m_num);
	DDX_Text(pDX, IDC_ROS_RES, m_ropeRes);
	DDX_Text(pDX, IDC_P_RES, m_pRes);
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
	ON_BN_CLICKED(IDC_DR, &CTraction::OnBnClickedDr)
	ON_BN_CLICKED(IDC_DR3, &CTraction::OnBnClickedDr3)
	ON_EN_CHANGE(IDC_EDIT11, &CTraction::OnEnChangeEdit11)
	ON_EN_SETFOCUS(IDC_FMAX, &CTraction::OnEnSetfocusFmax)
	ON_EN_CHANGE(IDC_H, &CTraction::OnEnChangeH)
	ON_EN_SETFOCUS(IDC_MC1, &CTraction::OnEnSetfocusMc1)
	ON_BN_CLICKED(IDC_EXPORT, &CTraction::OnBnClickedExport)
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
		m_gama = _tstof(dlg.gama.GetBuffer());
		if ((strWeb == "半圆槽"&&m_gama < 25) || (strWeb == "V形槽"&&m_gama < 35))
		{
			SetDlgItemText(IDC_STATIC_GAMA, _T("超出规定"));
		}
		else
		{
			SetDlgItemText(IDC_STATIC_GAMA, _T("°"));
		}
	}
	UpdateData(FALSE);
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
		m_gama = _tstof(dlg.gama.GetBuffer());
	}
	UpdateData(FALSE);
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
		m_f2 = 0;
		m_f3 = 0;
	}
	m_ef1 = exp(m_f1*r_alpha);
	m_ef2 = exp(m_f2*r_alpha);
	m_ef3 = exp(m_f3*r_alpha);
	m_mmdp = 0.6*m_mdp;
	m_mmpcar = m_npcar*0.6*m_mpcar;
	m_mmpcwt = m_npcwt*0.6*m_mpcwt;
	m_mmptd = m_nptd*0.6*m_mptd;
	m_dtdr = m_dt / m_dr;
	m_sf=max(pow(10, (2.6834 - log10(695.85 * 1000000 * m_ne / pow(m_dtdr,8.567))) / log10(77.09*pow(m_dtdr, -2.894))), m_beta == 2 ? 16 : 12);
	m_sa=m_ns*m_ddr * 1000 / m_t141;
	m_pp = m_t141 / (m_ns*m_ddr*m_dt)*((strWeb == "V形槽") && (r_beta == 0) ? 4.5 / sin(r_gama / 2) : 8 * cos(r_beta / 2) / (pi - r_beta - sin(r_beta)));
	m_rope = m_ns*m_r*m_qs*m_h;
	m_chain = m_nc*m_qc*m_h;
	m_cable = m_nt*m_qt*m_h / 2;
	m_qt = m_h > 80 ? 1.0943 : 0.8513;
	m_t11 = ((m_p + 1.25*m_q + m_mc / 2) / m_r + m_qs*m_ns*m_h)*m_gn;
	m_t21 = (m_p + m_psi*m_q + m_qc*m_nc*m_h + m_mc / 2 + m_qtcwt*m_h / 2) / m_r*m_gn;
	m_t112 = (m_p + 1.25*m_q + m_mc / 2 + m_nc*m_qc*m_h + m_nt*m_qt*m_h / 2) / m_r*m_gn;
	m_t212 = ((m_p + m_psi*m_q + m_mc / 2) / m_r + m_ns*m_qs*m_h)*m_gn;
	m_t121 = (m_p + m_q) / m_r*(m_gn + m_a) + m_mc / 2 / m_r*m_gn + m_qs*m_ns*m_h*(m_gn + (m_r*m_r + 2) / 3 * m_a) + ((strSel == "轿厢侧" ? m_mdp*m_r : 0) + (m_r>1 ? m_mpcar : 0))*m_a;
	m_t221 = (m_p + m_psi*m_q + m_qc*m_nc*m_h + m_qtcwt*m_h / 2) / m_r*(m_gn - m_a) + m_mc / 2 / m_r*m_gn - (m_mptd / 2 / m_r + (strSel == "轿厢侧" ? m_mdp*m_r : 0) + (m_r>1 ? m_mpcwt : 0))*m_a;
	m_t122 = (m_p + 0 + m_nc*m_qc*m_h + m_nt*m_qt*m_h / 2) / m_r*(m_gn - m_a) + m_mc / 2 / m_r*m_gn - (m_mptd / 2 / m_r + (strSel == "轿厢侧" ? m_mdp*m_r : 0) + m_mpcar)*m_a;
	m_t222 = (m_p + m_psi*m_q) / m_r*(m_gn + m_a) + m_ns*m_qs*m_h*(m_gn + (m_r*m_r + 2) / 3 * m_a) + m_mc / 2 / m_r*m_gn + ((strSel == "轿厢侧" ? m_mdp*m_r : 0) + (m_r>1 ? m_mpcwt : 0))*m_a;
	m_t123 = (m_p + m_q + m_nc*m_qc*m_h + m_nt*m_qt*m_h / 2) / m_r*(m_gn + m_a) + m_mc / 2 / m_r*m_gn + (m_mptd / 2 / m_r + (strSel == "轿厢侧" ? m_mdp*m_r : 0) + m_mpcar)*m_a;
	m_t223 = (m_p + m_psi*m_q) / m_r*(m_gn - m_a) + m_ns*m_qs*m_h*(m_gn - (m_r*m_r + 2) / 3 * m_a) + m_mc / 2 / m_r*m_gn - ((strSel == "轿厢侧" ? m_mdp*m_r : 0) + (m_r>1 ? m_mpcwt : 0))*m_a;
	m_t124 = (m_p + 0) / m_r*(m_gn - m_a) + m_mc / 2 / m_r*m_gn + m_qs*m_ns*m_h*(m_gn - (m_r*m_r + 2) / 3 * m_a) - ((strSel == "轿厢侧" ? m_mdp*m_r : 0) + (m_r>1 ? m_mpcar : 0))*m_a;
	m_t224 = (m_p + m_psi*m_q + m_qc*m_nc*m_h + m_qtcwt*m_h / 2) / m_r*(m_gn + m_a) + m_mc / 2 / m_r*m_gn + (m_mptd / 2 / m_r + (strSel == "轿厢侧" ? m_mdp*m_r : 0) + (m_r>1 ? m_mpcwt : 0))*m_a;
	m_t131 = (m_p + 0 + m_nc*m_qc*m_h + m_nt*m_qt*m_h / 2 + m_mc / 2) / m_r*m_gn;
	m_t231 = m_ns*m_qs*m_h*m_gn;
	m_t132 = m_ns*m_qs*m_h*m_gn;
	m_t232 = (m_p + m_psi*m_q + m_qc*m_nc*m_h + m_mc / 2 + m_qtcwt*m_h / 2) / m_r*m_gn;
	m_t141 = ((m_p + m_q + m_mc / 2) / m_r + m_qs*m_ns*m_h)*m_gn;
	m_t242 = ((m_p + m_psi*m_q + m_mc / 2) / m_r + m_ns*m_qs*m_h)*m_gn;
	m_p4 = 4 + 8.5 / (1 + m_r*m_v);
	m_t1dt21 = max(m_t11, m_t21) / min(m_t11, m_t21);
	m_t1mt21 = abs(m_t11 - m_t21);
	m_t1dt212 = max(m_t112, m_t212) / min(m_t112, m_t212);
	m_t1mt212 = abs(m_t112 - m_t212);
	m_t1dt221 = max(m_t121, m_t221) / min(m_t121, m_t221);
	m_t1mt221 = abs(m_t121 - m_t221);
	m_t1dt222 = max(m_t122, m_t222) / min(m_t122, m_t222);
	m_t1mt222 = abs(m_t122 - m_t222);
	m_t1dt223 = max(m_t123, m_t223) / min(m_t123, m_t223);
	m_t1mt223 = abs(m_t123 - m_t223);
	m_t1dt224 = max(m_t124, m_t224) / min(m_t124, m_t224);
	m_t1mt224 = abs(m_t124 - m_t224);
	m_t1dt231 = max(m_t131, m_t231) / min(m_t131, m_t231);
	m_t1mt231 = abs(m_t131 - m_t231);
	m_t1dt232 = max(m_t132, m_t232) / min(m_t132, m_t232);
	m_t1mt232 = abs(m_t132 - m_t232);
	m_fmax = (m_alpha > 180 ? 2 : 1)*max(m_t11 + m_t21, m_t112 + m_t212) / m_gn;
	vector<double> vec1 = { m_t1mt21, m_t1mt212, m_t1mt221, m_t1mt222, m_t1mt223, m_t1mt224 },
		vec2 = { m_t1mt231, m_t1mt232 };
	m_t10=MaxAll(vec1)*m_dt / 2 / 1000;
	m_t20 = MaxAll(vec2)*m_dt / 2 / 1000;
	m_mc1 = m_ns*m_qs*m_r - m_nt*m_qt / 4;
	m_mc2 = m_qc*m_nc / m_nc;
	m_mc3 = m_qc*m_nc / (m_ns*m_qs*m_r);
	m_mc4 = m_nc*m_qc / m_mc1;
	m_res11 = (m_t1dt21 <= m_ef1)?"通过":"不通过";
	m_res12 = (m_t1dt212 <= m_ef1) ? "通过" : "不通过";
	m_res21 = (m_t1dt221 <= m_ef2) ? "通过" : "不通过";
	m_res22 = (m_t1dt222 <= m_ef2) ? "通过" : "不通过";
	m_res23 = (m_t1dt223 <= m_ef2) ? "通过" : "不通过";
	m_res24 = (m_t1dt224 <= m_ef2)?"通过":"不通过";
	m_res31 = (m_t1dt231 >= m_ef3) ? "通过" : "不通过";
	m_res32 = (m_t1dt232 >= m_ef3) ? "通过" : "不通过";
	m_res41 = m_safeRes = (m_sa >= m_sf) ? "通过" : "不通过";
	m_res43 = (m_sa <= m_p4) ? "通过" : "不通过";
	m_ropeRes = _T("钢丝绳") + m_res41;
	m_pRes = _T("比压") + m_res43;
	vector<CString> vec = { m_res11, m_res12, m_res21, m_res22, m_res23, m_res24, m_res31, m_res32 };
	m_res = "通过";
	m_num = 0;
	for (auto i = 0; i < vec.size(); ++i)
	{
		if (vec[i] == "不通过")
		{
			m_res = "不通过";
			++m_num;
		}
	}
	GetDlgItem(IDC_EXPORT)->EnableWindow(TRUE);
	OnPaint();
	UpdateData(FALSE);
}

double CTraction::MaxAll(vector<double> vec)
{
	double max = vec[0];
	for (auto i = 1; i < vec.size(); ++i)
	{
		if (vec[i]>max)
		{
			max = vec[i];
		}
	}
	return max;
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
	UpdateData(TRUE);
	CSafetyFactor dlg(strSel,m_dt,strWeb,m_beta,m_gama);
	if (IDOK == dlg.DoModal())
	{
		m_ne = dlg.m_nequiv;
		CString str;
		str.Format(_T("%.3f"), m_ne);
		SetDlgItemText(IDC_NE, str);
	}
	UpdateData(FALSE);
}


void CTraction::OnBnClickedDr()
{
	// TODO: Add your control notification handler code here
	
	CDiameter dlg;
	if (IDOK == dlg.DoModal())
	{
		SetDlgItemText(IDC_DR, dlg.m_dr);
		m_dr = _tstof(dlg.m_dr.GetBuffer());
		SetDlgItemText(IDC_DR3, dlg.m_ddr);
		m_ddr = _tstof(dlg.m_ddr.GetBuffer());
	}
	UpdateData(FALSE);
}


void CTraction::OnBnClickedDr3()
{
	// TODO: Add your control notification handler code here
	OnBnClickedDr();
}


void CTraction::OnEnChangeEdit11()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CTraction::OnEnSetfocusFmax()
{
	// TODO: Add your control notification handler code here
	//提示气泡
	m_efmax.ShowBalloonTip(
		_T("USER"),
		_T("可以只考虑静载"),
		TTI_INFO);
}


void CTraction::OnEnChangeH()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	UpdateData(TRUE);
	CString str;
	str = (m_h < 30) ? "选0" : "不选0";
	SetDlgItemText(IDC_STATIC_NC, str);
	UpdateData(FALSE);
}


void CTraction::OnEnSetfocusMc1()
{
	// TODO: Add your control notification handler code here
	m_emc1.ShowBalloonTip(
		_T("USER"),
		_T("理论计算单位重量，已去除电缆。"),
		TTI_INFO);
}


void CTraction::OnBnClickedExport()
{
	// TODO: Add your control notification handler code here
	//导出
	//COleVariant covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
	//if (!app.CreateDispatch(_T("Excel.Application")))
	//{
	//	this->MessageBox(_T("无法创建Excel应用！"));
	//	//return TRUE;
	//}
	//else
	//{
	//	books = app.get_Workbooks();
	//	//打开Excel，其中pathname为Excel表的路径名  

	//	book = books.Add(covOptional);
	//	sheets = book.get_Worksheets();
	//	sheet = sheets.get_Item(COleVariant((short)1));  //获得坐标为（A，1）和（B，1）的两个单元格 
	//	range = sheet.get_Range(COleVariant(_T("A1")), COleVariant(_T("B1")));  //设置单元格类容为Hello Exce
	//	range.put_Value2(COleVariant(_T("Hello Excel")));  //选择整列，并设置宽度为自适应 
	//	cols = range.get_EntireColumn();
	//	cols.AutoFit();
	//	//设置字体为粗体 
	//	font = range.get_Font();
	//	font.put_Bold(COleVariant((short)TRUE));
	//	//获得坐标为（C，2）单元格 
	//	range = sheet.get_Range(COleVariant(_T("C2")), COleVariant(_T("C2")));
	//	//设置公式“=RAND()*100000”
	//	range.put_Formula(COleVariant(_T("=RAND()*100000")));
	//	//设置数字格式为货币型  
	//	range.put_NumberFormat(COleVariant(_T("$0.00")));
	//	//选择整列，并设置宽度为自适应  
	//	cols = range.get_EntireColumn();
	//	cols.AutoFit();
	//	//显示Excel表
	//	app.put_Visible(TRUE);
	//	app.put_UserControl(TRUE);
	//}
}
