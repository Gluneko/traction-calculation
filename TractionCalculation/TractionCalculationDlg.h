
// TractionCalculationDlg.h : ͷ�ļ�


#pragma once
#include "afxcmn.h"
#include "Traction.h"
#include "StartingTorque.h"
// CTractionCalculationDlg �Ի���
class CTractionCalculationDlg : public CDialogEx
{
	//DECLARE_DYNAMIC(CTractionCalculationDlg)
// ����
public:
	CTractionCalculationDlg(CWnd* pParent = NULL);	// ��׼���캯��
	//CTractionCalculationDlg(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	//CTractionCalculationDlg(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
// �Ի�������
	enum { IDD = IDD_TRACTIONCALCULATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

protected:
	//CStartingTorque m_torque;
	//CTraction m_traction;
// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tabCtl;
	CTraction m_page1;
	CStartingTorque m_page2;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
