// Traction.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Traction.h"
#include "afxdialogex.h"
#include "CompensationChain.h"
#include "WrapAngle.h"

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
{
	m_w_radio=0;
	m_w_dt = 410;
	m_w_ddp=400;
	m_w_la=303;
	m_w_h1=702;
	m_w_alpha2=m_alpha*pi/180;
	m_w_way = "单绕";
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
	DDV_MinMaxDouble(pDX, m_dr, 0, 1e+30);
	DDX_Text(pDX, IDC_NS, m_ns);
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
}


BEGIN_MESSAGE_MAP(CTraction, CDialogEx)
	ON_WM_VSCROLL()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, &CTraction::OnBnClickedButton1)
	ON_CBN_SELCHANGE(IDC_SCTYPE, &CTraction::OnCbnSelchangeSctype)
	ON_BN_CLICKED(IDC_QC, &CTraction::OnBnClickedQc)
	ON_BN_CLICKED(IDC_ALPHA, &CTraction::OnBnClickedAlpha)
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
	CString strWeb;
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
