
// TractionCalculationDlg.h : 头文件


#pragma once
#include "afxcmn.h"
#include "Traction.h"
#include "StartingTorque.h"
// CTractionCalculationDlg 对话框
class CTractionCalculationDlg : public CDialogEx
{
	//DECLARE_DYNAMIC(CTractionCalculationDlg)
// 构造
public:
	CTractionCalculationDlg(CWnd* pParent = NULL);	// 标准构造函数
	//CTractionCalculationDlg(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	//CTractionCalculationDlg(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
// 对话框数据
	enum { IDD = IDD_TRACTIONCALCULATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

protected:
	//CStartingTorque m_torque;
	//CTraction m_traction;
// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
