#pragma once
#include "afxcmn.h"
#include <vector>
using namespace std;
// CGroove dialog
typedef vector<pair<CString, pair<double, double>>> cdd;
typedef vector<pair<CString, pair<double, double>>>::size_type st;

class CGroove : public CDialogEx
{
	DECLARE_DYNAMIC(CGroove)

public:
	CGroove(double b,double g,CWnd* pParent = NULL);   // standard constructor
	virtual ~CGroove();

// Dialog Data
	enum { IDD = IDD_GROOVE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_radio;
	CString beta, gama; 
	CListCtrl m_ctllist;
	vector<pair<CString, pair<double, double>>> vec1,vec2,vec3;
	vector<cdd> vec;
	virtual BOOL OnInitDialog();
	CString NumFormat(int m_aa);
	afx_msg void OnBnClickedRadio1();
	void Insert(int n);
	afx_msg void OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult);
	double m_beta;
	double m_gama;
	afx_msg void OnNMClickList2(NMHDR *pNMHDR, LRESULT *pResult);
};
