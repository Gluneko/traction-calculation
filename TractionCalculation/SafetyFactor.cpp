// SafetyFactor.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "SafetyFactor.h"
#include "afxdialogex.h"


// CSafetyFactor dialog

IMPLEMENT_DYNAMIC(CSafetyFactor, CDialogEx)

CSafetyFactor::CSafetyFactor(CString pos, double dt, CString type, double beta, double gama, CWnd* pParent /*=NULL*/)
	: CDialogEx(CSafetyFactor::IDD, pParent)
	, m_pos(pos)
	, m_type(type)
	, m_dt(dt)
	, m_beta(beta)
	, m_gama(gama)
	, m_dp(0)
	, m_nps(0)
	, m_npr(0)
	, m_kp(0)
	, m_nequivp(0)
	, m_nequivt(0)
	, m_nequiv(0)
{

}

CSafetyFactor::~CSafetyFactor()
{
}

void CSafetyFactor::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_POS, m_pos);
	DDX_Text(pDX, IDC_TYPE, m_type);
	DDX_Text(pDX, IDC_DT, m_dt);
	DDX_Text(pDX, IDC_BETA, m_beta);
	DDX_Text(pDX, IDC_GAMA, m_gama);
	DDX_Text(pDX, IDC_DP, m_dp);
	DDV_MinMaxDouble(pDX, m_dp, 0, 1e+30);
	DDX_Text(pDX, IDC_NPS, m_nps);
	DDV_MinMaxInt(pDX, m_nps, 0, 2147483647);
	DDX_Text(pDX, IDC_NPR, m_npr);
	DDV_MinMaxInt(pDX, m_npr, 0, 2147483647);
	DDX_Text(pDX, IDC_KP, m_kp);
	DDX_Text(pDX, IDC_NEQUIVP, m_nequivp);
	DDX_Text(pDX, IDC_NEQUIVT, m_nequivt);
	DDV_MinMaxDouble(pDX, m_nequivt, 0, 1e+30);
	DDX_Text(pDX, IDC_NEQUIV, m_nequiv);
	DDX_Control(pDX, IDC_NPR, m_enpr);
}


BEGIN_MESSAGE_MAP(CSafetyFactor, CDialogEx)
	ON_WM_VSCROLL()
	ON_EN_SETFOCUS(IDC_NPR, &CSafetyFactor::OnEnSetfocusNpr)
	ON_BN_CLICKED(IDC_CALC, &CSafetyFactor::OnBnClickedCalc)
END_MESSAGE_MAP()


// CSafetyFactor message handlers


void CSafetyFactor::OnEnSetfocusNpr()
{
	// TODO: Add your control notification handler code here
	m_enpr.ShowBalloonTip(
		_T("USER"),
		_T("钢丝绳与两个连续的静滑轮接触点之间的距离不超过绳直径的200倍。"),
		TTI_INFO);
}


void CSafetyFactor::OnBnClickedCalc()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	m_kp = pow(m_dt / m_dp, 4);
	m_nequivp=m_kp*(m_nps + 4 * m_npr);
	m_nequiv = m_nequivp + m_nequivt;
	NumFormat(m_kp);
	NumFormat(m_nequivp);
	NumFormat(m_nequiv);
	UpdateData(FALSE);

}

void CSafetyFactor::ScrollClient(int nBar, int nPos)
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

int CSafetyFactor::GetScrollPos(int nBar, UINT nSBCode)
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

void CSafetyFactor::VScrool(int nBar, UINT nSBCode)
{
	const int scrollPos = GetScrollPos(nBar, nSBCode);

	if (scrollPos == -1)
		return;

	SetScrollPos(nBar, scrollPos, TRUE);
	ScrollClient(nBar, scrollPos);
}



void CSafetyFactor::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default

	VScrool(SB_VERT, nSBCode);
	CDialogEx::OnVScroll(nSBCode, nPos, pScrollBar);
}



BOOL CSafetyFactor::OnInitDialog()
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
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}
