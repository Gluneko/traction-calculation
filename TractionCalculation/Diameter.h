#pragma once
#include <vector>
#include "afxcmn.h"
using namespace std;

// CDiameter dialog

class CDiameter : public CDialogEx
{
	DECLARE_DYNAMIC(CDiameter)

public:
	CDiameter(double dr, double ddr, CWnd* pParent = NULL);   // standard constructor
	virtual ~CDiameter();
	vector<vector<double>> vec2;
	vector<CString> vec0;
	vector<CString> vec1;
	CString m_dr, m_ddr;
// Dialog Data
	enum { IDD = IDD_DR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_ctllist;
	afx_msg void OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	double m_idr;
	double m_iddr;
	afx_msg void OnNMClickList2(NMHDR *pNMHDR, LRESULT *pResult);

};
