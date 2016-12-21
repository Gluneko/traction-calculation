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
	/*************************************����������************************************/
	int m_q; //�������Q
	int m_p; //��������P
	int m_v;//��ٶ�v
	int m_h;//�����߶�H
	double m_psi;//ƽ��ϵ����
	double m_gn;//�������ٶ�gn
	double m_a;//�����ƶ����ٶ�a
	int m_r;//ҷ����r
	double m_qs;//ҷ��������qs
	double m_dr;//ҷ����ֱ��dr
	int m_ns;//ҷ��������ns
	double m_qc;//������(��)����qc
	int m_nc;//������(��)����nc
	double m_mc;//�Ž�װ�ð������ֵ�����Mc
	double m_qtcwt;//�������е��±���qtcwt
	double m_qt;//�������е��±���qt
	int m_nt;//�������е�������nt
	double m_alpha;//ҷ������ҷ�����ϵİ���Ϊ��
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	CComboBox m_scType;
	afx_msg void OnCbnSelchangeSctype();
	virtual void OnOK();
	afx_msg void OnBnClickedQc();
	afx_msg void OnBnClickedAlpha();
	//���Ǽ���Ի��������
	BOOL m_w_radio;//������ʽ
	double m_w_dt;//ҷ����ֱ��Dt
	double m_w_ddp;//������ֱ��DDP
	double m_w_la;//ˮƽ���ľ�LA
	double m_w_h1;//��ֱ���ľ�H1
	double m_w_alpha2;//���Ǧ�(��)
	CString m_w_way;
	CComboBox m_pro;
	afx_msg void OnBnClickedBeta();
	double m_beta;//�²��пڽǶ�ֵ��
	double m_gama;//�۵ĽǶ�ֵ��
	afx_msg void OnBnClickedGama();
	CString strWeb;//��������
	CString strPro; // V�β۸��Ӵ���
	CString strPos; //������λ��
	CString strSel;//�������໹�Ƕ��ز�
	double m_miu1;//װ�ع�����1
	double m_miu2;//������ͣ������2
	double m_miu3;//����Ħ��ϵ��f3
	afx_msg void OnBnClickedBtnCalc();
	double m_f1;//����Ħ��ϵ��f1
	double m_f2;//����Ħ��ϵ��f2
	double m_f3;//����Ħ��ϵ��f3
	double m_ef1;//����ҷ����ef1��
	double m_ef2;//����ҷ����ef2��
	double m_ef3;//����ҷ����ef3��
	afx_msg void OnCbnSelchangePro();
	CComboBox m_pos;//
	afx_msg void OnCbnSelchangePos();
	double m_mdp;//����������MDP
	double m_mmdp;//��������������mDP
	int m_npcar;//����໬������nPcar
	double m_mpcar;//����໬������MPcar
	double m_mmpcar;//����໬����������mPcar
	int m_npcwt;//���ز໬������nPcwt
	double m_mpcwt;//���ز໬������MPcwt
	double m_mmpcwt;//���ز໬����������mPcwt
	int m_nptd;//����������nPTD
	double m_mptd;//����������MPTD
	double m_mmptd;//��������������mPTD
	CComboBox m_sel;//
	afx_msg void OnCbnSelchangeSelPos();
	afx_msg void OnEnSetfocusSa();
	CEdit m_esa;//
	double m_ddr;//ҷ������С�ƶ��غ�dr
	double m_dtdr;//ҷ����������Dt/dr
	double m_sf;//ҷ����˿����С��ȫϵ��Sf
	double m_sa;//ҷ����˿��ʵ�ʰ�ȫϵ��Sa
	double m_pp;//��ѹp
	double m_rope;//��˿������
	double m_chain;//����������
	double m_cable;//���е�������
	afx_msg void OnBnClickedNe();
	afx_msg void OnBnClickedDr();
	afx_msg void OnBnClickedDr3();
	double m_dt;//ҷ����ֱ��Dt
	double m_ne;//���ֵĵ�Ч����Nequiv
	afx_msg void OnEnChangeEdit11();
	afx_msg void OnEnSetfocusFmax();
	CEdit m_efmax;//
	double m_fmax;//0.1 ҷ��������
	double m_t10;//0.2.1 ҷ�����ƶ����أ����������� T1
	double m_t20;//0.2.2 ҷ�����ƶ����أ��������� T2
	double m_t11;//1.1 װ��125%��������Ľ���λ����ײ�ʱ T1
	double m_t21;//T2
	double m_t1dt21;//T1/T2
	double m_t1mt21;//T1-T2
	double m_t121;//2.1 װ�ж�������Ľ���λ����ײ����м�ͣʱ T1
	double m_t221;//T2
	double m_t1dt221;//T1/T2
	double m_t1mt221;//T1-T2
	double m_t122;//2.2 ���������Ľ���λ����߲����м�ͣʱ T1
	double m_t222;//T2
	double m_t1dt222;//T1/T2
	double m_t1mt222;//T1-T2
	double m_t123;//2.3 װ�ж�������Ľ���λ����߲����м�ͣʱ T1
	double m_t223;//T2
	double m_t1dt223;//T1/T2
	double m_t1mt223;//T1-T2
	double m_t124;//2.4 ���������Ľ���λ����ײ����м�ͣʱ T1
	double m_t224;//T2
	double m_t1dt224;//T1/T2
	double m_t1mt224;//T1-T2
	double m_t131;//3.1 ����Ϊ����ʱ������ѹ�ڻ�������ҷ�������Ϸ�����תʱ T1
	double m_t231;//T2
	double m_t1dt231;//T1/T2
	double m_t1mt231;//T1-T2
	double m_t132;//3.2 ����ѹ�ڻ�������ҷ������ת�������� T1
	double m_t232;//T2
	double m_t1dt232;//T1/T2
	double m_t1mt232;//T1-T2
	double m_t141;//4.1 װ�ж�������Ľ���λ����ײ�ʱ����ҷ����ˮƽ���ϸ�˿�������� T1
	double m_t242;//4.2 ����λ����ײ�ʱ��˿�������� T2
	double m_p4;//4.3 ��ѹp���ֵ
	double m_t112;//1.2 װ��125%��������Ľ���λ����߲�ʱ T1
	double m_t212;//T2
	double m_t1dt212;//T1/T2
	double m_t1mt212;//T1-T2
	afx_msg void OnEnChangeH();
	double m_mc1;
	double m_mc2;
	double d3, d4;
	CString m_mc3;
	CString m_mc4;
	double m_dr2;//ҷ������С�ƶ��غ�dr
	double m_ns2;//ҷ��������ns
	afx_msg void OnEnSetfocusMc1();
	CEdit m_emc1;//
	//���ۣ�ͨ��/��ͨ����
	CString m_res11;//1.1 װ��125%��������Ľ���λ����ײ�ʱ
	CString m_res12;//1.2 װ��125%��������Ľ���λ����߲�ʱ
	CString m_res21;//2.1 װ�ж�������Ľ���λ����ײ����м�ͣʱ
	CString m_res22;//2.2 ���������Ľ���λ����߲����м�ͣʱ
	CString m_res23;//2.3 װ�ж�������Ľ���λ����߲����м�ͣʱ
	CString m_res24;//2.4 ���������Ľ���λ����ײ����м�ͣʱ
	CString m_res31;//3.1 ����Ϊ����ʱ������ѹ�ڻ�������ҷ�������Ϸ�����תʱ
	CString m_res32;//3.2 ����ѹ�ڻ�������ҷ������ת��������
	CString m_res41;//4.1 װ�ж�������Ľ���λ����ײ�ʱ����ҷ����ˮƽ���ϸ�˿��������
	CString m_res43;//4.3 ��ѹp���ֵ
	CString m_safeRes;//ҷ������ȫϵ������
	CString m_res;//ҷ�����ۺ��ж�
	int m_num;//
	CString m_ropeRes;//��˿��
	CString m_pRes;//��ѹ
	/******************************************************************************/
	afx_msg void OnBnClickedExport();
	//����ӿ������ 
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
