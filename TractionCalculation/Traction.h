#pragma once
#include "CompensationChain.h"
#include "TestDlg.h"
// CTraction dialog

class CTraction : public CDialogEx
{
	DECLARE_DYNAMIC(CTraction)

public:
	CTraction(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTraction();

// Dialog Data
	enum { IDD = IDD_TRACTION2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
