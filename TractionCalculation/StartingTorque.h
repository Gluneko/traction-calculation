#pragma once


// CStartingTorque dialog

class CStartingTorque : public CPropertyPage
{
	DECLARE_DYNAMIC(CStartingTorque)

public:
	CStartingTorque();
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
	double m_q;
	double m_p;
	double m_v;
	double m_h;
	double m_psi;
	double m_gn;
	double m_a;
	double m_r;
	double m_yita;
	double m_i;
	double m_gd2;
	double m_ne;
	double m_sne;
	double m_re;
	double m_miu;
	double m_dt;
	double m_mt;
	double m_ddp;
	double m_mdp;
	double m_dptd;
	double m_mptd;
	int m_nptd;
	int m_npcar;
	int m_npcwt;
	double m_ns;
	int m_nc;
	int m_nt;
	double m_n;
	double m_ms;
	double m_jq;
	double m_jt;
	double m_jdp;
	double m_jptd;
	double m_jpcar;
	double m_jpcwt;
	double c_jx;
	double m_j;
	double m_eps;
	double m_mg;
	double m_mf;
	double m_mq;
	double m_me;
	double m_lamda;
	CString m_result;
};
