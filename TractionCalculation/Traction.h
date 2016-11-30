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
	CString strPro;
	CString strPos,strSel;
	double m_miu1;
	double m_miu2;
	double m_miu3;
	afx_msg void OnBnClickedBtnCalc();
	double m_f1;
	double m_f2;
	double m_f3;
	double m_ef1;
	double m_ef2;
	double m_ef3;
	afx_msg void OnCbnSelchangePro();
	CComboBox m_pos;
	afx_msg void OnCbnSelchangePos();
	double m_mdp;
	double m_mmdp;
	int m_npcar;
	double m_mpcar;
	double m_mmpcar;
	int m_npcwt;
	double m_mpcwt;
	double m_mmpcwt;
	int m_nptd;
	double m_mptd;
	double m_mmptd;
	CComboBox m_sel;
	afx_msg void OnCbnSelchangeSelPos();
	afx_msg void OnEnSetfocusSa();
	CEdit m_esa;
	double m_ddr;
	double m_dtdr;
	double m_sf;
	double m_sa;
	double m_pp;
	double m_rope;
	double m_chain;
	double m_cable;
	afx_msg void OnBnClickedNe();
};
