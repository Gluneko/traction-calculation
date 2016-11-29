#pragma once
#include "CompensationChain.h"
#include "TestDlg.h"
#include "afxwin.h"
// CTraction dialog

class CTraction : public CDialogEx
{
	DECLARE_DYNAMIC(CTraction)

public:
	CTraction(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTraction();
	int GetScrollPos(int nBar, UINT nSBCode);
	void ScrollClient(int nBar, int nPos);
	void VScrool(int nBar, UINT nSBCode);
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
	double m_alpha;
	/*afx_msg void OnEnChangeQc();
	afx_msg void OnEnSetfocusQc();*/
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	CComboBox m_scType;
	afx_msg void OnCbnSelchangeSctype();
	virtual void OnOK();
	afx_msg void OnBnClickedQc();
	afx_msg void OnBnClickedAlpha();
	//包角计算对话框的数据
	BOOL m_w_radio;
	double m_w_dt;
	double m_w_ddp;
	double m_w_la;
	double m_w_h1;
	double m_w_alpha2;
	CString m_w_way;
	CComboBox m_pro;
	afx_msg void OnBnClickedBeta();
	double m_beta;
	double m_gama;
	afx_msg void OnBnClickedGama();
	CString strWeb;
	double m_miu1;
	double m_miu2;
	double m_miu3;
};
