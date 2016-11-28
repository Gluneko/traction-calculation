// Groove.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Groove.h"
#include "afxdialogex.h"


// CGroove dialog

IMPLEMENT_DYNAMIC(CGroove, CDialogEx)

CGroove::CGroove(CWnd* pParent /*=NULL*/)
	: CDialogEx(CGroove::IDD, pParent)
	, m_radio(0)
{
	vec1.push_back(make_pair(NumFormat(8), make_pair(90, 30)));
	vec1.push_back(make_pair(NumFormat(10), make_pair(95, 30)));
	vec1.push_back(make_pair(NumFormat(12), make_pair(95, 30)));
	vec1.push_back(make_pair(NumFormat(13), make_pair(96.5, 30)));
	vec1.push_back(make_pair(NumFormat(16), make_pair(96.5, 30)));
	vec2.push_back(make_pair(_T("GETM1.9D-8"), make_pair(90, 35)));
	vec2.push_back(make_pair(_T("GETM1.9-8"), make_pair(96, 35)));
	vec2.push_back(make_pair(_T("GETM3.0H-10"), make_pair(96, 35)));
	vec2.push_back(make_pair(_T("GETM3.5H-10"), make_pair(90, 25)));
	vec2.push_back(make_pair(_T("GETM5.5-10"), make_pair(90, 25)));
	vec2.push_back(make_pair(_T("GETM5.5-10"), make_pair(96, 35)));
	vec2.push_back(make_pair(_T("GETM6.0H-10"), make_pair(96, 35)));
}

CGroove::~CGroove()
{
}

void CGroove::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO1, m_radio);
	DDX_Control(pDX, IDC_LIST2, m_ctllist);
}


BEGIN_MESSAGE_MAP(CGroove, CDialogEx)
END_MESSAGE_MAP()


// CGroove message handlers


BOOL CGroove::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	
	// TODO:  Add extra initialization here

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

CString CGroove::NumFormat(int m_aa)
{
	CString str;
	str.Format(_T("%d"), m_aa);
	return str;
}