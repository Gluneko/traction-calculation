// StartingTorque.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "StartingTorque.h"
#include "afxdialogex.h"


// CStartingTorque dialog

IMPLEMENT_DYNAMIC(CStartingTorque, CPropertyPage)

CStartingTorque::CStartingTorque()
	: CPropertyPage(CStartingTorque::IDD)
	, m_q(0)
	, m_p(0)
	, m_v(0)
	, m_h(0)
	, m_psi(0)
	, m_gn(0)
	, m_a(0)
	, m_r(0)
	, m_yita(0)
	, m_i(0)
	, m_gd2(0)
	, m_ne(0)
	, m_sne(0)
	, m_re(0)
	, m_miu(0)
	, m_dt(0)
	, m_mt(0)
	, m_ddp(0)
	, m_mdp(0)
	, m_dptd(0)
	, m_mptd(0)
	, m_nptd(0)
	, m_npcar(0)
	, m_npcwt(0)
	, m_ns(0)
	, m_nc(0)
	, m_nt(0)
	, m_n(0)
	, m_ms(0)
	, m_jq(0)
	, m_jt(0)
	, m_jdp(0)
	, m_jptd(0)
	, m_jpcar(0)
	, m_jpcwt(0)
	, c_jx(0)
	, m_j(0)
	, m_eps(0)
	, m_mg(0)
	, m_mf(0)
	, m_mq(0)
	, m_me(0)
	, m_lamda(0)
	, m_result(_T(""))
{
}

CStartingTorque::~CStartingTorque()
{
}

void CStartingTorque::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
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
	DDX_Text(pDX, IDC_YITA, m_yita);
	DDV_MinMaxDouble(pDX, m_yita, 0, 1);
	DDX_Text(pDX, IDC_I, m_i);
	DDV_MinMaxDouble(pDX, m_i, 0, 1e+30);
	DDX_Text(pDX, IDC_GD2, m_gd2);
	DDV_MinMaxDouble(pDX, m_gd2, 0, 1e+30);
	DDX_Text(pDX, IDC_NE, m_ne);
	DDV_MinMaxDouble(pDX, m_ne, 0, 1e+30);
	DDX_Text(pDX, IDC_SNE, m_sne);
	DDV_MinMaxDouble(pDX, m_sne, 0, 1e+30);
	DDX_Text(pDX, IDC_RE, m_re);
	DDV_MinMaxDouble(pDX, m_re, 0, 1e+30);
	DDX_Text(pDX, IDC_MIU, m_miu);
	DDV_MinMaxDouble(pDX, m_miu, 0, 1e+30);
	DDX_Text(pDX, IDC_DT, m_dt);
	DDV_MinMaxDouble(pDX, m_dt, 0, 1e+30);
	DDX_Text(pDX, IDC_MT, m_mt);
	DDV_MinMaxDouble(pDX, m_mt, 0, 1e+30);
	DDX_Text(pDX, IDC_DDP, m_ddp);
	DDV_MinMaxDouble(pDX, m_ddp, 0, 1e+30);
	DDX_Text(pDX, IDC_MDP, m_mdp);
	DDV_MinMaxDouble(pDX, m_mdp, 0, 1e+30);
	DDX_Text(pDX, IDC_DPTD, m_dptd);
	DDV_MinMaxDouble(pDX, m_dptd, 0, 1e+30);
	DDX_Text(pDX, IDC_MPTD, m_mptd);
	DDV_MinMaxDouble(pDX, m_mptd, 0, 1e+30);
	DDX_Text(pDX, IDC_NPTD, m_nptd);
	DDV_MinMaxInt(pDX, m_nptd, 0, 2147483647);
	DDX_Text(pDX, IDC_NPCAR, m_npcar);
	DDV_MinMaxInt(pDX, m_npcar, 0, 2147483647);
	DDX_Text(pDX, IDC_NPCWT, m_npcwt);
	DDV_MinMaxInt(pDX, m_npcwt, 0, 2147483647);
	DDX_Text(pDX, IDC_NS, m_ns);
	DDV_MinMaxDouble(pDX, m_ns, 0, 2147483647);
	DDX_Text(pDX, IDC_NC, m_nc);
	DDV_MinMaxInt(pDX, m_nc, 0, 2147483647);
	DDX_Text(pDX, IDC_NT, m_nt);
	DDV_MinMaxInt(pDX, m_nt, 0, 2147483647);
	DDX_Text(pDX, IDC_N, m_n);
	DDV_MinMaxDouble(pDX, m_n, 0, 1e+30);
	DDX_Text(pDX, IDC_MS, m_ms);
	DDV_MinMaxDouble(pDX, m_ms, 0, 1e+30);
	DDX_Text(pDX, IDC_JQ, m_jq);
	DDV_MinMaxDouble(pDX, m_jq, 0, 1e+30);
	DDX_Text(pDX, IDC_JT, m_jt);
	DDV_MinMaxDouble(pDX, m_jt, 0, 1e+30);
	DDX_Text(pDX, IDC_JDP, m_jdp);
	DDV_MinMaxDouble(pDX, m_jdp, 0, 1e+30);
	DDX_Text(pDX, IDC_JPTD, m_jptd);
	DDV_MinMaxDouble(pDX, m_jptd, 0, 1e+30);
	DDX_Text(pDX, IDC_JPCAR, m_jpcar);
	DDV_MinMaxDouble(pDX, m_jpcar, 0, 1e+30);
	DDX_Text(pDX, IDC_JPCWT, m_jpcwt);
	DDV_MinMaxDouble(pDX, m_jpcwt, 0, 1e+30);
	DDX_Text(pDX, IDC_JX, c_jx);
	DDV_MinMaxDouble(pDX, c_jx, 0, 1e+30);
	DDX_Text(pDX, IDC_J, m_j);
	DDV_MinMaxDouble(pDX, m_j, 0, 1e+30);
	DDX_Text(pDX, IDC_EPS, m_eps);
	DDV_MinMaxDouble(pDX, m_eps, 0, 1e+30);
	DDX_Text(pDX, IDC_MG2, m_mg);
	DDV_MinMaxDouble(pDX, m_mg, 0, 1e+30);
	DDX_Text(pDX, IDC_MF2, m_mf);
	DDV_MinMaxDouble(pDX, m_mf, 0, 1e+30);
	DDX_Text(pDX, IDC_MQ, m_mq);
	DDV_MinMaxDouble(pDX, m_mq, 0, 1e+30);
	DDX_Text(pDX, IDC_ME, m_me);
	DDV_MinMaxDouble(pDX, m_me, 0, 1e+30);
	DDX_Text(pDX, IDC_LAMDA, m_lamda);
	DDV_MinMaxDouble(pDX, m_lamda, 0, 1e+30);
	DDX_Text(pDX, IDC_RESULT, m_result);
}


BEGIN_MESSAGE_MAP(CStartingTorque, CPropertyPage)
	ON_WM_VSCROLL()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BTN_CALC, &CStartingTorque::OnBnClickedBtnCalc)
END_MESSAGE_MAP()


// CStartingTorque message handlers

void CStartingTorque::ScrollClient(int nBar, int nPos)
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

int CStartingTorque::GetScrollPos(int nBar, UINT nSBCode)
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

void CStartingTorque::VScrool(int nBar, UINT nSBCode)
{
	const int scrollPos = GetScrollPos(nBar, nSBCode);

	if (scrollPos == -1)
		return;

	SetScrollPos(nBar, scrollPos, TRUE);
	ScrollClient(nBar, scrollPos);
}



void CStartingTorque::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default
	
	VScrool(SB_VERT, nSBCode);
	CPropertyPage::OnVScroll(nSBCode, nPos, pScrollBar);
}


BOOL CStartingTorque::OnInitDialog()
{
	CPropertyPage::OnInitDialog();

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
	si.nMax = sz.cy*1.5;
	si.nMin = 0;
	si.nPage = 300;
	SetScrollInfo(SB_VERT, &si, FALSE);  //此函数将产生一个垂直滚动条
	ShowScrollBar(SB_VERT, TRUE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void CStartingTorque::OnSize(UINT nType, int cx, int cy)
{
	CPropertyPage::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
}


void CStartingTorque::OnBnClickedBtnCalc()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	m_n = m_p*m_v*(1 - m_psi) / (102 * m_yita);
	
	UpdateData(FALSE);
}
