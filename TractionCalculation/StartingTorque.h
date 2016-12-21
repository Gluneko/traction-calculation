#pragma once
#include "afxwin.h"


// CStartingTorque dialog

class CStartingTorque : public CDialogEx
{
	DECLARE_DYNAMIC(CStartingTorque)

public:
	CStartingTorque(CWnd* pParent = NULL);
	virtual ~CStartingTorque();

//	int m_page;

	int GetScrollPos(int nBar, UINT nSBCode);
	void ScrollClient(int nBar, int nPos);
	void VScrool(int nBar, UINT nSBCode);
// Dialog Data
	enum { IDD = IDD_TORQUE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedBtnCalc();
	/*************************************变量命名区************************************/
	double m_q;//额定载重量Q
	double m_p;//轿厢自重P
	double m_v;//额定速度v
	double m_h;//提升高度H
	double m_psi;//平衡系数ψ
	double m_gn;//重力加速度gn
	double m_a;//轿厢最大起动加速度a
	double m_r;//曳引比r
	double m_yita;//曳引机传动效率η
	double m_i;//曳引机减速比i
	double m_gd2;//曳引机飞轮矩GD²
	double m_ne;//曳引机额定功率Ne
	double m_sne;//曳引机额定转速ne
	double m_re;//曳引机轴承处的轴半径re
	double m_miu;//曳引机轴承摩擦系数μ
	double m_dt;//曳引轮直径Dt
	double m_mt;//曳引轮重量Mt
	double m_ddp;//导向轮直径DDP
	double m_mdp;//导向轮重量MDP
	double m_dptd;//补偿张紧轮直径DPTD
	double m_mptd;//补偿张紧轮重量MPTD
	int m_nptd;//补偿张紧轮数量NPTD
	int m_npcar;//轿厢侧滑轮数量NPcar
	int m_npcwt;//对重侧滑轮数量NPcwt
	double m_ns;//曳引绳数量ns
	int m_nc;//补偿链(绳)数量nc
	int m_nt;//随行电缆数量nt
	double m_n;//电动机功率N
	double m_ms;//最大负载转矩Mf
	double m_jq;// 驱动主机转动惯量
	double m_jt;//曳引轮转动惯量
	double m_jdp;//导向轮转动惯量
	double m_jptd;//张紧轮转动惯量
	double m_jpcar;//轿厢侧滑轮转动惯量
	double m_jpcwt;//对重侧滑轮转动惯量
	double m_jx;//线性运动部件转化的转动惯量
	double m_j;//制动轴总转动惯量
	double m_eps;//起动角加速度
	double m_mg;//最大起动转矩
	double m_mf;//摩擦转矩
	double m_mq;//最大起动转矩
	double m_me;//曳引机额定转矩
	double m_lamda;//验算起动转矩倍数λ
	CString m_result;//计算结果
	double m_qs;//曳引绳比重qs
	double m_qc;//补偿链(绳)比重qc
	double m_mpcar;//轿厢侧滑轮重量MPcar
	double m_dpcar;//轿厢侧滑轮直径DPcar
	double m_mpcwt;//对重侧滑轮重量MPcwt
	double m_dpcwt;//对重侧滑轮直径DPcwt
	double m_mc;//张紧装置包括滑轮的重量Mc
	afx_msg void OnEnChangeRe();
	afx_msg void OnEnSetfocusRe();
	CEdit m_ere;
	double m_qt;//随行电缆比重qt
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButton1();
};
