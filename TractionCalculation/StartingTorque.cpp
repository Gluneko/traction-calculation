// StartingTorque.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "StartingTorque.h"
#include "afxdialogex.h"
#include "TestDlg.h"

// CStartingTorque dialog

IMPLEMENT_DYNAMIC(CStartingTorque, CDialogEx)

CStartingTorque::CStartingTorque(CWnd* pParent /*=NULL*/)
: CDialogEx(CStartingTorque::IDD, pParent)
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
	, m_jx(0)
	, m_j(0)
	, m_eps(0)
	, m_mg(0)
	, m_mf(0)
	, m_mq(0)
	, m_me(0)
	, m_lamda(0)
	, m_result(_T(""))
	, m_qs(0)
	, m_qc(0)
	, m_mpcar(0)
	, m_dpcar(0)
	, m_mpcwt(0)
	, m_dpcwt(0)
	, m_mc(0)
	, m_qt(0)
{
	
	
	m_q = 1000;
	m_p = 1300;
	m_v = 2;
	m_h = 125;
	m_psi = 0.45;
	m_gn = 9.81;
	m_a = 1.5;
	m_r = 2;
	m_yita = 0.85;
	m_i = 1;
	m_gd2 = 4.35;
	m_ne = 20.8;
	m_sne = 280;
	m_re = 35;
	m_miu = 0.1;
	m_dt = 760;
	m_mt = 120;
	m_dptd = 700;
	m_mptd = 150;
	m_nptd = 1;
	m_dpcar = 410;
	m_mpcar = 60;
	m_npcar = 2;
	m_dpcwt = 410;
	m_mpcwt = 60;
	m_npcwt = 1;
	m_qs = 0.39;
	m_ns = 7;
	m_qc = 0.888;
	m_nc = 6;
	m_mc = 200;
	m_qt = 0.7;
	m_nt = 2;
	m_ddp = 410;
	m_mdp = 120;
}

CStartingTorque::~CStartingTorque()
{
}

void CStartingTorque::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_JX, m_jx);
	DDV_MinMaxDouble(pDX, m_jx, 0, 1e+30);
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
	DDX_Text(pDX, IDC_QS, m_qs);
	DDV_MinMaxDouble(pDX, m_qs, 0, 1e+30);
	DDX_Text(pDX, IDC_QC, m_qc);
	DDV_MinMaxDouble(pDX, m_qc, 0, 1e+30);
	DDX_Text(pDX, IDC_MPCAR, m_mpcar);
	DDV_MinMaxDouble(pDX, m_mpcar, 0, 1e+30);
	DDX_Text(pDX, IDC_DPCAR, m_dpcar);
	DDV_MinMaxDouble(pDX, m_dpcar, 0, 1e+30);
	DDX_Text(pDX, IDC_MPCWT, m_mpcwt);
	DDV_MinMaxDouble(pDX, m_mpcwt, 0, 1e+30);
	DDX_Text(pDX, IDC_DPCWT, m_dpcwt);
	DDV_MinMaxDouble(pDX, m_dpcwt, 0, 1e+30);
	DDX_Text(pDX, IDC_MC, m_mc);
	DDV_MinMaxDouble(pDX, m_mc, 0, 1e+30);
	DDX_Control(pDX, IDC_RE, m_ere);
	DDX_Text(pDX, IDC_QT, m_qt);
	DDV_MinMaxDouble(pDX, m_qt, 0, 1e+30);
}


BEGIN_MESSAGE_MAP(CStartingTorque, CDialogEx)
	ON_WM_VSCROLL()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BTN_CALC, &CStartingTorque::OnBnClickedBtnCalc)
	ON_EN_CHANGE(IDC_RE, &CStartingTorque::OnEnChangeRe)
	ON_EN_SETFOCUS(IDC_RE, &CStartingTorque::OnEnSetfocusRe)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON1, &CStartingTorque::OnBnClickedButton1)
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
	CDialogEx::OnVScroll(nSBCode, nPos, pScrollBar);
}


BOOL CStartingTorque::OnInitDialog()
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
	si.nMax = sz.cy*1.8;
	si.nMin = 0;
	si.nPage = 300;
	SetScrollInfo(SB_VERT, &si, FALSE);  //此函数将产生一个垂直滚动条
	ShowScrollBar(SB_VERT, TRUE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void CStartingTorque::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
}


void CStartingTorque::OnBnClickedBtnCalc()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	m_n = m_q*m_v*(1 - m_psi) / (102 * m_yita);
	m_ms = (m_p + 1.1*m_q + m_r*m_ns*m_qs*m_h - (m_p + m_psi*m_q) - m_nc*m_qc*m_h)*m_dt / 1000 * m_gn / (2 * m_r*m_yita*m_i);
	m_jq = m_gd2 / 4;
	m_jt = 0.6*m_mt*pow((m_dt / 1000), 2) / 4;
	m_jdp = 0.6*m_mdp*pow((m_dt / 1000), 2) / 4;
	m_jptd = m_nptd*0.6*m_mptd*pow((m_dptd / 1000), 2) / (4 * m_r*m_r);
	m_jpcar = m_npcar*0.6*m_mpcar*pow((m_dpcar / 1000), 2) / (4 * m_r*m_r);
	m_jpcwt = m_npcwt*0.6*m_mpcwt*pow((m_dpcwt / 1000), 2) / (4 * m_r*m_r);
	m_jx = (m_p + 1.1*m_q + m_r*m_ns*m_qs*m_h + (m_p + m_psi*m_q) + m_nc*m_qc*m_h)*pow((m_dt / 1000), 2) / (4 * m_r*m_r);
	m_j = m_jq + m_jt + m_jdp + m_jptd + m_jpcar + m_jpcwt + m_jx;
	m_eps = 2 * m_a*m_r / (m_dt / 1000);
	m_mg = m_j*m_eps / m_yita;
	m_mf = m_miu*m_re / 1000 * ((m_p + 1.1*m_q + m_r*m_ns*m_qs*m_h + (m_p + m_psi*m_q) + m_nc*m_qc*m_h+m_mc)*m_gn / m_r);
	m_mq = m_ms + m_mf + m_mg;
	m_me=9550 * m_ne / m_sne;
	m_lamda = m_mq / m_me;
	NumFormat(m_n);
	NumFormat(m_ms);
	NumFormat(m_jq);
	NumFormat(m_jt);
	NumFormat(m_jdp);
	NumFormat(m_jptd);
	NumFormat(m_jpcar);
	NumFormat(m_jpcwt);
	NumFormat(m_jx);
	NumFormat(m_j);
	NumFormat(m_eps);
	NumFormat(m_mg);
	NumFormat(m_mf);
	NumFormat(m_me);
	NumFormat(m_mq);
	NumFormat(m_lamda);
	m_result = (m_lamda >= 3 && m_lamda <= 3.5) ? "通过" : "不通过";
	OnPaint();
	UpdateData(FALSE);
}


void CStartingTorque::OnEnChangeRe()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CStartingTorque::OnEnSetfocusRe()
{
	// TODO: Add your control notification handler code here
	//提示气泡
	m_ere.ShowBalloonTip(
		_T("作者"),
		_T("如不清楚可不填"),
		TTI_INFO);
}


HBRUSH CStartingTorque::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Change any attributes of the DC here
	if (IDC_RESULT == pWnd->GetDlgCtrlID())
	{
		if (m_result == "通过")
		{
			pDC->SetTextColor(RGB(0, 255, 0));
		}
		else if (m_result == "不通过")
		{
			pDC->SetTextColor(RGB(255, 0, 0));
		}
	}
	// TODO:  Return a different brush if the default is not desired
	return hbr;
}


void CStartingTorque::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CTestDlg dlg;
	dlg.DoModal();
}
