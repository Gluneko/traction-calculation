#pragma once
#include "afxwin.h"

#define pi 3.1415926
// CWrapAngle dialog

class CWrapAngle : public CDialogEx
{
	DECLARE_DYNAMIC(CWrapAngle)

public:
	CWrapAngle(BOOL radio,CString way, double dt, double ddp, double la, double m_h1, double m_alpha1, double m_alpha2, CWnd* pParent = NULL);   // standard constructor
	virtual ~CWrapAngle();

// Dialog Data
	enum { IDD = IDD_WRAP_ANGLE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_radio1;
	afx_msg void OnBnClickedRadio1();
	virtual BOOL OnInitDialog();
	CComboBox m_way;
	double m_dt;
	double m_ddp;
	double m_la;
	double m_h1;
	double m_alpha1;
	double m_alpha2;
	afx_msg void OnCbnSelchangeWay();
	CString strWay;
	afx_msg void OnBnClickedOk();
};
