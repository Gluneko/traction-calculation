// Groove.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Groove.h"
#include "afxdialogex.h"


// CGroove dialog

IMPLEMENT_DYNAMIC(CGroove, CDialogEx)

CGroove::CGroove(CString t,CWnd* pParent /*=NULL*/)
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
	vec3.push_back(make_pair(NumFormat(8), make_pair(90, 35)));
	vec3.push_back(make_pair(NumFormat(10), make_pair(95, 30)));
	vec3.push_back(make_pair(NumFormat(12), make_pair(95, 35)));
	vec.push_back(vec1);
	vec.push_back(vec2);
	vec.push_back(vec3);
	type = t;
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
	ON_BN_CLICKED(IDC_RADIO1, &CGroove::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CGroove::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO3, &CGroove::OnBnClickedRadio1)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CGroove::OnNMDblclkList2)
END_MESSAGE_MAP()


// CGroove message handlers


BOOL CGroove::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	
	// TODO:  Add extra initialization here
	CRect rect;
	// 获取列表视图控件的位置和大小   
	m_ctllist.GetClientRect(&rect);

	// 为列表视图控件添加全行选中和栅格风格   
	m_ctllist.SetExtendedStyle(m_ctllist.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// 为列表视图控件添加三列   
	m_ctllist.InsertColumn(0, _T("通润曳引轮绳槽"), LVCFMT_CENTER, rect.Width() *3/ 5, 0);
	m_ctllist.InsertColumn(1, _T("β"), LVCFMT_CENTER, rect.Width() / 5, 1);
	m_ctllist.InsertColumn(2, _T("γ"), LVCFMT_CENTER, rect.Width() / 5, 2);
	OnBnClickedRadio1();
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

CString CGroove::NumFormat(int m_aa)
{
	CString str;
	str.Format(_T("%d"), m_aa);
	return str;
}

void CGroove::Insert(int n)
{
	CString str;
	for (st i = 0; i<vec[n].size(); ++i)
	{
		m_ctllist.InsertItem(i, vec[n][i].first);
		str.Format(_T("%.1f"), vec[n][i].second.first);
		m_ctllist.SetItemText(i, 1, str);
		str.Format(_T("%.1f"), vec[n][i].second.second);
		m_ctllist.SetItemText(i, 2, str);
	}
}
void CGroove::OnBnClickedRadio1()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	m_ctllist.DeleteAllItems();
	m_ctllist.DeleteColumn(0);
	
	CString type;
	switch (m_radio)
	{
	case 0:
		type = "通润曳引轮绳槽";
		break;
	case 1:
		type = "富沃德曳引轮绳槽";
		break;
	case 2:
		type = "蓝光曳引轮绳槽";
		break;
	}
	CRect rect;
	// 获取列表视图控件的位置和大小   
	m_ctllist.GetClientRect(&rect);
	m_ctllist.InsertColumn(0, type, LVCFMT_CENTER, rect.Width() * 3 / 5, 0);
	Insert(m_radio);
	UpdateData(FALSE);
}


void CGroove::OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	NMLISTVIEW *pNMListView = (NMLISTVIEW*)pNMHDR;

	if (-1 != pNMListView->iItem)        // 如果iItem不是-1，就说明有列表项被选择   
	{
		// 获取被选择列表项第二个子项的文本   
		beta = m_ctllist.GetItemText(pNMListView->iItem, 1);
		gama = m_ctllist.GetItemText(pNMListView->iItem, 2);
		double gama_n = _tstof(gama.GetBuffer());
		if ((type == "半圆槽"&&gama_n < 25) || (type == "V形槽"&&gama_n < 35))
		{
			MessageBox(_T("超出规定！"), _T("提示"), MB_ICONINFORMATION);
		}
		else{
			CGroove::OnOK();
		}
		// 将选择的语言显示与编辑框中   
		//SetDlgItemText(IDC_LANG_SEL_EDIT, strLangName);
	}
}
