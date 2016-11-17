// CompensationChain.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "CompensationChain.h"
#include "afxdialogex.h"

typedef vector<pair<CString, double>>::size_type st;
// CCompensationChain dialog

IMPLEMENT_DYNAMIC(CCompensationChain, CDialogEx)

CCompensationChain::CCompensationChain(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCompensationChain::IDD, pParent)
{
	/*vec.push_back(make_pair( _T("WFC050"), 0.88 ));
	vec.push_back(make_pair(_T("WFB/WFC075"), 1.12));
	vec.push_back(make_pair(_T("WFB/WFC100"), 1.49));
	vec.push_back(make_pair(_T("WFB/WFC125"), 1.88));
	vec.push_back(make_pair(_T("WFB/WFC150"), 2.24));
	vec.push_back(make_pair(_T("WFB175"), 2.63));
	vec.push_back(make_pair(_T("WFB/WFC200"), 2.98));
	vec.push_back(make_pair(_T("WFC225"), 3.2));
	vec.push_back(make_pair(_T("WFB/WFC250"), 3.73));
	vec.push_back(make_pair(_T("WFB/WFC300"), 4.47));
	vec.push_back(make_pair(_T("WFB/WFC350"), 5.22));
	vec.push_back(make_pair(_T("WFB/WFC400"), 5.96));*/
}

CCompensationChain::~CCompensationChain()
{
}

void CCompensationChain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_ctllist);
}


BEGIN_MESSAGE_MAP(CCompensationChain, CDialogEx)
END_MESSAGE_MAP()


// CCompensationChain message handlers


//BOOL CCompensationChain::OnInitDialog()
//{
//	CDialogEx::OnInitDialog();
//	//::SetWindowPos(this->m_hWnd, HWND_TOPMOST, -1, -1, -1, -1, SWP_NOMOVE | SWP_NOSIZE);
//	// TODO:  Add extra initialization here
//	//CRect rect;
//	//CString str;
//	//// ��ȡ�б���ͼ�ؼ���λ�úʹ�С   
//	//m_ctllist.GetClientRect(&rect);
//
//	//// Ϊ�б���ͼ�ؼ�����ȫ��ѡ�к�դ����   
//	//m_ctllist.SetExtendedStyle(m_ctllist.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
//
//	//// Ϊ�б���ͼ�ؼ���������   
//	//m_ctllist.InsertColumn(0, _T("�������ͺ�"), LVCFMT_CENTER, rect.Width() / 3, 0);
//	//m_ctllist.InsertColumn(1, _T("��λ��"), LVCFMT_CENTER, rect.Width() / 3, 1);
//	//m_ctllist.InsertColumn(2, _T(""), LVCFMT_CENTER, rect.Width() / 3, 2);
//	//for (st i = 0; i<vec.size(); ++i)
//	//{
//	//  m_ctllist.InsertItem(0, vec[i].first);
//	//  str.Format(_T("%f"), vec[i].second);
//	//  m_ctllist.SetItemText(0, 1, str);
//	//  m_ctllist.SetItemText(0, 2, _T("kg/m"));
//	//}
//	return TRUE;  // return TRUE unless you set the focus to a control
//	// EXCEPTION: OCX Property Pages should return FALSE
//}


BOOL CCompensationChain::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CRect rect;
	GetClientRect(&rect);
	//::SetWindowPos(this->m_hWnd, HWND_TOPMOST, -1, -1, -1, -1, SWP_NOMOVE | SWP_NOSIZE);
	::SetWindowPos(this->m_hWnd, HWND_TOPMOST, rect.left, rect.top, rect.Width(), rect.Height(), SWP_SHOWWINDOW);
	// TODO:  Add extra initialization here

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}