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
	double m_q;
	double m_p;
	double m_v;
	double m_h;
	double m_psi;
	double m_gn;
	double m_a;
	double m_r;
	double m_qs;
	double m_dr;
	int m_ns;
	double m_qc;
	int m_nc;
	double m_mc;
	double m_qtcwt;
	double m_qt;
	int m_nt;
};
