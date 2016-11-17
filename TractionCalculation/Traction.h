#pragma once
#include "CompensationChain.h"
#include "TestDlg.h"
// CTraction dialog

class CTraction : public CPropertyPage
{
	DECLARE_DYNAMIC(CTraction)

public:
	CTraction();
	virtual ~CTraction();

// Dialog Data
	enum { IDD = IDD_TRACTION2 };
	CCompensationChain dlg;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnSetfocusQc();
	afx_msg void OnBnClickedBtnCalc();
	afx_msg void OnEnChangeEdit19();
};
