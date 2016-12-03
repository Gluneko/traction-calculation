#pragma once
#include "CompensationChain.h"
#include "TestDlg.h"
#include "afxwin.h"
#include "Excel.h"
#include "SelectFolderDlg.h"
#include <vector>
using namespace std;
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
	double MaxAll(vector<double> vec);
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
	afx_msg void OnBnClickedDr();
	afx_msg void OnBnClickedDr3();
	double m_dt;
	double m_ne;
	afx_msg void OnEnChangeEdit11();
	afx_msg void OnEnSetfocusFmax();
	CEdit m_efmax;
	double m_fmax;
	double m_t10;
	double m_t20;
	double m_t11;
	double m_t21;
	double m_t1dt21;
	double m_t1mt21;
	double m_t121;
	double m_t221;
	double m_t1dt221;
	double m_t1mt221;
	double m_t122;
	double m_t222;
	double m_t1dt222;
	double m_t1mt222;
	double m_t123;
	double m_t223;
	double m_t1dt223;
	double m_t1mt223;
	double m_t124;
	double m_t224;
	double m_t1dt224;
	double m_t1mt224;
	double m_t131;
	double m_t231;
	double m_t1dt231;
	double m_t1mt231;
	double m_t132;
	double m_t232;
	double m_t1dt232;
	double m_t1mt232;
	double m_t141;
	double m_t242;
	double m_p4;
	double m_t112;
	double m_t212;
	double m_t1dt212;
	double m_t1mt212;
	afx_msg void OnEnChangeH();
	double m_mc1;
	double m_mc2;
	double m_mc3;
	double m_mc4;
	afx_msg void OnEnSetfocusMc1();
	CEdit m_emc1;
	CString m_res11;
	CString m_res12;
	CString m_res21;
	CString m_res22;
	CString m_res23;
	CString m_res24;
	CString m_res31;
	CString m_res32;
	CString m_res41;
	CString m_res43;
	CString m_safeRes;
	CString m_res;
	int m_num;
	CString m_ropeRes;
	CString m_pRes;
	afx_msg void OnBnClickedExport();
	//定义接口类变量 
	CApplication app;
	CWorkbook book;
	CWorkbooks books;
	CWorksheet sheet;
	CWorksheets sheets;
	CRange range;
	CFont0 font;
	CRange cols;
	LPDISPATCH lpDisp;
};
