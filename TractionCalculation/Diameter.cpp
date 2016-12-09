// Diameter.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Diameter.h"
#include "afxdialogex.h"

typedef vector<CString>::size_type st1;
typedef vector<double>::size_type st2;
// CDiameter dialog

IMPLEMENT_DYNAMIC(CDiameter, CDialogEx)

CDiameter::CDiameter(double dr, double ddr, CWnd* pParent /*=NULL*/)
	: CDialogEx(CDiameter::IDD, pParent)
	, m_idr(dr)
	, m_iddr(ddr)
{
	vec1.push_back(_T("钢丝绳直径(mm)"));
	vec1.push_back(_T("   单位重   "));
	vec1.push_back(_T(" 双1320/1620 单1410 "));
	vec1.push_back(_T("双1320/1770 双1370/1770 单1500"));
	vec1.push_back(_T(" 单1570N/mm² ")); 
	vec1.push_back(_T(" 单1620N/mm² "));
	vec1.push_back(_T(" 单1770N/mm² "));
	vec1.push_back(_T("双1320/1770 双1370/1770 单1570"));
	vec1.push_back(_T(" 双1570/1770 单1670 "));
	vec0 = { _T("8"), _T("9"), _T("9.5"), _T("10"), _T("11"), _T("12"), _T("12.7"),
		_T("13"), _T("14"), _T("16"), _T("19"), _T("22"), _T("半8"), _T("半9"), _T("半9.5"), _T("半10"), _T("半11"), _T("半12"), _T("半12.7"),
		_T("半13"), _T("半14"), _T("半16"), _T("半19"), _T("半22"), _T("钢6"), _T("钢6.5"), _T("钢8"), _T("钢10"), _T("钢11"), _T("钢12"), _T("钢12.7"), _T("钢13"), _T("钢16") };
	vec2.push_back({ 0.222, 26.5,28.1,29.4,30.4,33.2,-1,-1});
	vec2.push_back({ 0.281, 33.5, 35.6, 37.3, 38.4, 42, -1, -1 });
	vec2.push_back({ 0.313, 37.3, 39.7, 41.5, 42.8, 46.8, -1, -1 });
	vec2.push_back({ 0.347,41.3, 44, 46, 47.5, 51.9, -1, -1 });
	vec2.push_back({ 0.42,50, 53.2, 55.6, 57.4, 62.8, -1, -1 });
	vec2.push_back({ 0.5,59.5, 63.3, 66.2, 68.4, 74.7, -1, -1 });
	vec2.push_back({ 0.56,66.6, 70.9, 74.2, 76.6, 83.6, -1, -1 });
	vec2.push_back({ 0.586,69.8, 74.3, 77.7, 80.2, 87.6, -1, -1 });
	vec2.push_back({ 0.679,81, 86.1, 90.2, 93, 102, -1, -1 });
	vec2.push_back({ 0.888,106, 113, 118, 122, 133, -1, -1 });
	vec2.push_back({ 1.25,149, 159, 166, 171, 187, -1, -1 });
	vec2.push_back({ 1.68,200, 213, 223, 230, 251, -1, -1 });
	vec2.push_back({ 0.26 ,- 1, -1, 35.8, -1, 40.3, 35.8, 38 });
	vec2.push_back({ 0.33, - 1, -1, 45.3, -1, 51, 45.3, 48.2 });
	vec2.push_back({ 0.367 ,- 1, -1, 50.4, -1, 56.9, 50.4, 53.7 });
	vec2.push_back({ 0.407 ,- 1, -1, 55.9, -1, 63, 55.9, 59.5 });
	vec2.push_back({ 0.492 ,- 1, -1, 67.6, -1, 76.2, 67.6, 79.1 });
	vec2.push_back({ 0.586 ,- 1, -1, 80.6, -1, 90.7, 80.6, 85.6 });
	vec2.push_back({ 0.656 ,- 1, -1, 90.1, -1, 102, 90.1, 95.9 });
	vec2.push_back({ 0.688, - 1, -1, 94.5, -1, 106, 94.5, 100 });
	vec2.push_back({ 0.798 ,- 1, -1, 110, -1, 124, 110, 117 });
	vec2.push_back({ 1.04 ,- 1, -1, 143, -1, 161, 143, 152 });
	vec2.push_back({ 1.47 ,- 1, -1, 202, -1, 227, 202, 215 });
	vec2.push_back({ 1.97 ,- 1, -1, 271, -1, 305, 271, 288 });
	vec2.push_back({ 0.152 ,- 1, -1, 21.2, -1, 23.9, 21.2, -1 });
	vec2.push_back({ 0.178 ,- 1, -1, 24.9, -1, 28, 24.9, -1 });
	vec2.push_back({ 0.27 ,- 1, -1, 37.7, -1, 42.5, 37.7, -1 });
	vec2.push_back({ 0.425 ,- 1, -1, 58.9, -1, 66.3, 58.9, -1 });
	vec2.push_back({ 0.511 ,- 1, -1, 71.2, -1, 80.3, 71.2, -1 });
	vec2.push_back({ 0.608 ,- 1, -1, 84.8, -1, 95.6, 84.8, -1 });
	vec2.push_back({ 0.681, - 1, -1, 95, -1, 107, 95, -1 });
	vec2.push_back({ 0.695 ,- 1, -1, 98.8, -1, 111, 98.8, -1 });
	vec2.push_back({ 1.075 ,- 1, -1, 150, -1, 169, 150, -1 });
}

CDiameter::~CDiameter()
{
}

void CDiameter::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_ctllist);
	DDX_Text(pDX, IDC_DR, m_idr);
	DDX_Text(pDX, IDC_DR4, m_iddr);
}


BEGIN_MESSAGE_MAP(CDiameter, CDialogEx)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CDiameter::OnNMDblclkList2)
	ON_BN_CLICKED(IDOK, &CDiameter::OnBnClickedOk)
	ON_NOTIFY(NM_CLICK, IDC_LIST2, &CDiameter::OnNMClickList2)
END_MESSAGE_MAP()


// CDiameter message handlers


void CDiameter::OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	NMLISTVIEW *pNMListView = (NMLISTVIEW*)pNMHDR;

	if (pNMListView->iItem != -1 && pNMListView->iSubItem>1)        // 如果iItem不是-1，就说明有列表项被选择   
	{
		// 获取被选择列表项子项的文本   
		m_ddr = m_ctllist.GetItemText(pNMListView->iItem, pNMListView->iSubItem);
		if (m_ddr != "")
		{
			m_dr = m_ctllist.GetItemText(pNMListView->iItem,0);
			CString str;
			m_iddr = _tstof(m_ddr.GetBuffer());
			m_ddr.ReleaseBuffer();
			str = (pNMListView->iItem > 11) ? m_dr.Mid(1) : m_dr;//处理有中文情况
			m_idr = _tstof(str.GetBuffer());
			str.ReleaseBuffer();
			CDiameter::OnOK();
		}
	}
}


BOOL CDiameter::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	CRect rect;
	CString str;
	// 获取列表视图控件的位置和大小   
	m_ctllist.GetClientRect(&rect);

	// 为列表视图控件添加全行选中和栅格风格   
	m_ctllist.SetExtendedStyle(m_ctllist.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// 为列表视图控件添加九列
	CString tmp;
	for (st1 i = 0; i < vec1.size(); ++i)
	{
		tmp += vec1[i];
	}
	for (st1 i = 0; i < vec1.size(); ++i)
	{
		m_ctllist.InsertColumn(i, vec1[i], LVCFMT_CENTER, rect.Width() *vec1[i].GetLength()/ tmp.GetLength(), i);
	}
	for (st1 i = 0; i<vec0.size(); ++i)
	{
		m_ctllist.InsertItem(i, vec0[i]);
		str.Format(_T("%.3f"), vec2[i][0]);
		m_ctllist.SetItemText(i, 1, str);
		for (st1 j = 2; j < vec1.size(); ++j)
		{
			if (vec2[i][j - 1] != -1)
			{
				str.Format(_T("%.1f"), vec2[i][j - 1]);
			}
			else
			{
				str = "";
			}
			m_ctllist.SetItemText(i, j, str);
		}
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void CDiameter::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}


void CDiameter::OnNMClickList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	NMLISTVIEW *pNMListView = (NMLISTVIEW*)pNMHDR;
	if (pNMListView->iItem != -1 && pNMListView->iSubItem>1)        // 如果iItem不是-1，就说明有列表项被选择   
	{
		// 获取被选择列表项子项的文本   
		m_ddr = m_ctllist.GetItemText(pNMListView->iItem, pNMListView->iSubItem);
		if (m_ddr != "")
		{
			
			m_dr = m_ctllist.GetItemText(pNMListView->iItem, 0);
			CString str;
			m_iddr = _tstof(m_ddr.GetBuffer());
			m_ddr.ReleaseBuffer();
			str = (pNMListView->iItem > 11) ? m_dr.Mid(1) : m_dr;//处理有中文情况
			m_idr = _tstof(str.GetBuffer());
			str.ReleaseBuffer();
		}
	}
	UpdateData(FALSE);
}


