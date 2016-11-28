#pragma once
#include <vector>
#include "afxcmn.h"
using namespace std;
// CCompensationChain dialog

class CCompensationChain : public CDialogEx
{
	DECLARE_DYNAMIC(CCompensationChain)

public:
	CCompensationChain(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCompensationChain();

// Dialog Data
	enum { IDD = IDD_COMPENSATION_CHAIN };
	vector<pair<CString, double>> vec;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	virtual BOOL OnInitDialog();
	CListCtrl m_ctllist;
	CString qc;
	virtual BOOL OnInitDialog();
	afx_msg void OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult);
	virtual void OnOK();
};
