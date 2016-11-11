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
{
	
}

CStartingTorque::~CStartingTorque()
{
}

void CStartingTorque::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CStartingTorque, CPropertyPage)
	ON_WM_VSCROLL()
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
