#pragma once
#include "afxcmn.h"
#include <vector>
using namespace std;
// CGroove dialog

class CGroove : public CDialogEx
{
	DECLARE_DYNAMIC(CGroove)

public:
	CGroove(CWnd* pParent = NULL);   // standard constructor
	virtual ~CGroove();

// Dialog Data
	enum { IDD = IDD_GROOVE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_radio;
	CListCtrl m_ctllist;
	vector<pair<CString, pair<double, double>>> vec1,vec2,vec3;
	virtual BOOL OnInitDialog();
	CString NumFormat(int m_aa);
};
