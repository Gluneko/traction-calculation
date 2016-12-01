#pragma once
#include "afxwin.h"


// CSafetyFactor dialog

class CSafetyFactor : public CDialogEx
{
	DECLARE_DYNAMIC(CSafetyFactor)

public:
	CSafetyFactor(CString pos, double dt, CString type,double beta,double gama,CWnd* pParent = NULL);   // standard constructor
	virtual ~CSafetyFactor();
	int GetScrollPos(int nBar, UINT nSBCode);
	void ScrollClient(int nBar, int nPos);
	void VScrool(int nBar, UINT nSBCode);
	
// Dialog Data
	enum { IDD = IDD_SAFETY_FACTOR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString m_pos;
	CString m_type;
	double m_dt;
	double m_beta;
	double m_gama;
	double m_dp;
	int m_nps;
	int m_npr;
	double m_kp;
	double m_nequivp;
	double m_nequivt;
	double m_nequiv;
	afx_msg void OnEnSetfocusNpr();
	CEdit m_enpr;
	afx_msg void OnBnClickedCalc();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	virtual BOOL OnInitDialog();
};
