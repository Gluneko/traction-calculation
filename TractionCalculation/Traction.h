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
	bool Catchept();
	double MaxAll(vector<double> vec);
// Dialog Data
	enum { IDD = IDD_TRACTION2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	/*************************************变量命名区************************************/
	int m_q; //额定载重量Q
	int m_p; //轿厢自重P
	int m_v;//额定速度v
	int m_h;//提升高度H
	double m_psi;//平衡系数ψ
	double m_gn;//重力加速度gn
	double m_a;//轿厢制动减速度a
	int m_r;//曳引比r
	double m_qs;//曳引绳比重qs
	double m_dr;//曳引绳直径dr
	int m_ns;//曳引绳数量ns
	double m_qc;//补偿链(绳)比重qc
	int m_nc;//补偿链(绳)数量nc
	double m_mc;//张紧装置包括滑轮的重量Mc
	double m_qtcwt;//对重随行电缆比重qtcwt
	double m_qt;//轿厢随行电缆比重qt
	int m_nt;//轿厢随行电缆数量nt
	double m_alpha;//曳引绳在曳引轮上的包角为α
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	CComboBox m_scType;
	afx_msg void OnCbnSelchangeSctype();
	virtual void OnOK();
	afx_msg void OnBnClickedQc();
	afx_msg void OnBnClickedAlpha();
	//包角计算对话框的数据
	BOOL m_w_radio;//绕绳方式
	double m_w_dt;//曳引轮直径Dt
	double m_w_ddp;//导向轮直径DDP
	double m_w_la;//水平中心距LA
	double m_w_h1;//垂直中心距H1
	double m_w_alpha2;//包角α(θ)
	CString m_w_way;
	CComboBox m_pro;
	afx_msg void OnBnClickedBeta();
	double m_beta;//下部切口角度值β
	double m_gama;//槽的角度值γ
	afx_msg void OnBnClickedGama();
	CString strWeb;//绳槽类型
	CString strPro; // V形槽附加处理
	CString strPos; //导向轮位置
	CString strSel;//计算轿厢侧还是对重侧
	double m_miu1;//装载工况μ1
	double m_miu2;//紧急制停工况μ2
	double m_miu3;//当量摩擦系数f3
	afx_msg void OnBnClickedBtnCalc();
	double m_f1;//当量摩擦系数f1
	double m_f2;//当量摩擦系数f2
	double m_f3;//当量摩擦系数f3
	double m_ef1;//许用曳引比ef1α
	double m_ef2;//许用曳引比ef2α
	double m_ef3;//许用曳引比ef3α
	afx_msg void OnCbnSelchangePro();
	CComboBox m_pos;//
	afx_msg void OnCbnSelchangePos();
	double m_mdp;//导向轮质量MDP
	double m_mmdp;//导向轮折算质量mDP
	int m_npcar;//轿厢侧滑轮数量nPcar
	double m_mpcar;//轿厢侧滑轮质量MPcar
	double m_mmpcar;//轿厢侧滑轮折算质量mPcar
	int m_npcwt;//对重侧滑轮数量nPcwt
	double m_mpcwt;//对重侧滑轮质量MPcwt
	double m_mmpcwt;//对重侧滑轮折算质量mPcwt
	int m_nptd;//补偿轮数量nPTD
	double m_mptd;//补偿轮质量MPTD
	double m_mmptd;//补偿轮折算质量mPTD
	CComboBox m_sel;//
	afx_msg void OnCbnSelchangeSelPos();
	afx_msg void OnEnSetfocusSa();
	CEdit m_esa;//
	double m_ddr;//曳引绳最小破断载荷dr
	double m_dtdr;//曳引轮绳径比Dt/dr
	double m_sf;//曳引钢丝绳最小安全系数Sf
	double m_sa;//曳引钢丝绳实际安全系数Sa
	double m_pp;//比压p
	double m_rope;//钢丝绳总重
	double m_chain;//补偿链总重
	double m_cable;//随行电缆总重
	afx_msg void OnBnClickedNe();
	afx_msg void OnBnClickedDr();
	afx_msg void OnBnClickedDr3();
	double m_dt;//曳引轮直径Dt
	double m_ne;//滑轮的等效数量Nequiv
	afx_msg void OnEnChangeEdit11();
	afx_msg void OnEnSetfocusFmax();
	CEdit m_efmax;//
	double m_fmax;//0.1 曳引机轴载
	double m_t10;//0.2.1 曳引机制动力矩，非滞留工况 T1
	double m_t20;//0.2.2 曳引机制动力矩，滞留工况 T2
	double m_t11;//1.1 装有125%额定载重量的轿厢位于最底层时 T1
	double m_t21;//T2
	double m_t1dt21;//T1/T2
	double m_t1mt21;//T1-T2
	double m_t121;//2.1 装有额定载重量的轿厢位于最底层下行急停时 T1
	double m_t221;//T2
	double m_t1dt221;//T1/T2
	double m_t1mt221;//T1-T2
	double m_t122;//2.2 空载重量的轿厢位于最高层上行急停时 T1
	double m_t222;//T2
	double m_t1dt222;//T1/T2
	double m_t1mt222;//T1-T2
	double m_t123;//2.3 装有额定载重量的轿厢位于最高层下行急停时 T1
	double m_t223;//T2
	double m_t1dt223;//T1/T2
	double m_t1mt223;//T1-T2
	double m_t124;//2.4 空载重量的轿厢位于最底层上行急停时 T1
	double m_t224;//T2
	double m_t1dt224;//T1/T2
	double m_t1mt224;//T1-T2
	double m_t131;//3.1 轿厢为空载时，对重压在缓冲器上曳引机向上方向旋转时 T1
	double m_t231;//T2
	double m_t1dt231;//T1/T2
	double m_t1mt231;//T1-T2
	double m_t132;//3.2 轿厢压在缓冲器上曳引机旋转提升对重 T1
	double m_t232;//T2
	double m_t1dt232;//T1/T2
	double m_t1mt232;//T1-T2
	double m_t141;//4.1 装有额定载重量的轿厢位于最底层时，在曳引轮水平面上钢丝绳静拉力 T1
	double m_t242;//4.2 对重位于最底层时钢丝绳静拉力 T2
	double m_p4;//4.3 比压p最大值
	double m_t112;//1.2 装有125%额定载重量的轿厢位于最高层时 T1
	double m_t212;//T2
	double m_t1dt212;//T1/T2
	double m_t1mt212;//T1-T2
	afx_msg void OnEnChangeH();
	double m_mc1;
	double m_mc2;
	double d3, d4;
	CString m_mc3;
	CString m_mc4;
	double m_dr2;//曳引绳最小破断载荷dr
	double m_ns2;//曳引绳数量ns
	afx_msg void OnEnSetfocusMc1();
	CEdit m_emc1;//
	//结论（通过/不通过）
	CString m_res11;//1.1 装有125%额定载重量的轿厢位于最底层时
	CString m_res12;//1.2 装有125%额定载重量的轿厢位于最高层时
	CString m_res21;//2.1 装有额定载重量的轿厢位于最底层下行急停时
	CString m_res22;//2.2 空载重量的轿厢位于最高层上行急停时
	CString m_res23;//2.3 装有额定载重量的轿厢位于最高层下行急停时
	CString m_res24;//2.4 空载重量的轿厢位于最底层上行急停时
	CString m_res31;//3.1 轿厢为空载时，对重压在缓冲器上曳引机向上方向旋转时
	CString m_res32;//3.2 轿厢压在缓冲器上曳引机旋转提升对重
	CString m_res41;//4.1 装有额定载重量的轿厢位于最底层时，在曳引轮水平面上钢丝绳静拉力
	CString m_res43;//4.3 比压p最大值
	CString m_safeRes;//曳引绳安全系数结论
	CString m_res;//曳引力综合判断
	int m_num;//
	CString m_ropeRes;//钢丝绳
	CString m_pRes;//比压
	/******************************************************************************/
	afx_msg void OnBnClickedExport();
	//定义接口类变量 
	CApplication app;
	CWorkbook book;
	CWorkbooks books;
	CWorksheet sheet;
	CWorksheets sheets;
	CRange range,range2;
	CFont0 font,font2;
	CRange cols;
	LPDISPATCH lpDisp;
	CString StringFormat(double m_aa);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	vector<int> cvec1;
	vector<CString> cvec2;
};
