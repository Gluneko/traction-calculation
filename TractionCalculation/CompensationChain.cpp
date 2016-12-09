// CompensationChain.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "CompensationChain.h"
#include "afxdialogex.h"

typedef vector<pair<CString, double>>::size_type st;
// CCompensationChain dialog

IMPLEMENT_DYNAMIC(CCompensationChain, CDialogEx)

CCompensationChain::CCompensationChain(double q,CWnd* pParent /*=NULL*/)
	: CDialogEx(CCompensationChain::IDD, pParent)
	, m_qc(q)
{
	vec.push_back(make_pair( _T("WFC050"), 0.88 ));
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
	vec.push_back(make_pair(_T("WFB/WFC400"), 5.96));
}

CCompensationChain::~CCompensationChain()
{
}

void CCompensationChain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_ctllist);
	DDX_Text(pDX, IDC_QC, m_qc);
	DDV_MinMaxDouble(pDX, m_qc, 0, 1e+30);
}


BEGIN_MESSAGE_MAP(CCompensationChain, CDialogEx)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CCompensationChain::OnNMDblclkList2)
	ON_NOTIFY(NM_CLICK, IDC_LIST2, &CCompensationChain::OnNMClickList2)
END_MESSAGE_MAP()


// CCompensationChain message handlers


//BOOL CCompensationChain::OnInitDialog()
//{
//	CDialogEx::OnInitDialog();
//	//::SetWindowPos(this->m_hWnd, HWND_TOPMOST, -1, -1, -1, -1, SWP_NOMOVE | SWP_NOSIZE);
//	// TODO:  Add extra initialization here

//	return TRUE;  // return TRUE unless you set the focus to a control
//	// EXCEPTION: OCX Property Pages should return FALSE
//}


BOOL CCompensationChain::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  Add extra initialization here
	CRect rect;
	CString str;
	// 获取列表视图控件的位置和大小   
	m_ctllist.GetClientRect(&rect);

	// 为列表视图控件添加全行选中和栅格风格   
	m_ctllist.SetExtendedStyle(m_ctllist.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// 为列表视图控件添加三列   
	m_ctllist.InsertColumn(0, _T("补偿链型号"), LVCFMT_CENTER, rect.Width() / 3, 0);
	m_ctllist.InsertColumn(1, _T("单位重"), LVCFMT_CENTER, rect.Width() / 3, 1);
	m_ctllist.InsertColumn(2, _T(""), LVCFMT_CENTER, rect.Width() / 3, 2);
	for (st i = 0; i<vec.size(); ++i)
	{
		m_ctllist.InsertItem(i, vec[i].first);
		str.Format(_T("%.2f"), vec[i].second);
		m_ctllist.SetItemText(i, 1, str);
		m_ctllist.SetItemText(i, 2, _T("kg/m"));
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void CCompensationChain::OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	NMLISTVIEW *pNMListView = (NMLISTVIEW*)pNMHDR;

	if (-1 != pNMListView->iItem)        // 如果iItem不是-1，就说明有列表项被选择   
	{
		// 获取被选择列表项第二个子项的文本   
		qc = m_ctllist.GetItemText(pNMListView->iItem, 1);
		m_qc = _tstof(qc.GetBuffer());
		qc.ReleaseBuffer();
		CCompensationChain::OnOK();
		// 将选择的语言显示与编辑框中   
		//SetDlgItemText(IDC_LANG_SEL_EDIT, strLangName);
	}
	UpdateData(FALSE);
}


void CCompensationChain::OnOK()
{
	// TODO: Add your specialized code here and/or call the base class

	CDialogEx::OnOK();
}


void CCompensationChain::OnNMClickList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	NMLISTVIEW *pNMListView = (NMLISTVIEW*)pNMHDR;

	if (-1 != pNMListView->iItem)        // 如果iItem不是-1，就说明有列表项被选择   
	{
		// 获取被选择列表项第二个子项的文本   
		qc = m_ctllist.GetItemText(pNMListView->iItem, 1);
		m_qc = _tstof(qc.GetBuffer());
		qc.ReleaseBuffer();
		// 将选择的语言显示与编辑框中   
		//SetDlgItemText(IDC_LANG_SEL_EDIT, strLangName);
	}
	UpdateData(FALSE);
}
