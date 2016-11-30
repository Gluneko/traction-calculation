// Diameter.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Diameter.h"
#include "afxdialogex.h"


// CDiameter dialog

IMPLEMENT_DYNAMIC(CDiameter, CDialogEx)

CDiameter::CDiameter(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDiameter::IDD, pParent)
{
	vec1.push_back(_T("钢丝绳直径(mm)"));
	vec1.push_back(_T("单位重"));
	vec1.push_back(_T("半圆槽"));
	vec1.push_back(_T("双1320/1620 单1410"));
	vec1.push_back(_T("双1320/1770 双1370/1770 单1500"));
	vec1.push_back(_T("单1570N/mm²")); 
	vec1.push_back(_T("单1620N/mm²"));
	vec1.push_back(_T("单1770N/mm²"));
	vec1.push_back(_T("双1320/1770 双1370/1770 单1570"));
	vec1.push_back(_T("双1570/1770 单1670"));
	vec0 = { _T("8"), _T("9"), _T("9.5"), _T("10"), _T("11"), _T("12"), _T("12.7"),
		_T("13"), _T("14"), _T("16"), _T("19"), _T("22"), _T("半8"), _T("半9"), _T("半9.5"), _T("半10"), _T("半11"), _T("半12"), _T("半12.7"),
		_T("半13"), _T("半14"), _T("半16"), _T("半19"), _T("半22"), _T("钢6"), _T("钢6.5"), _T("钢8"), _T("钢10"), _T("钢11"), _T("钢12"), _T("钢12.7"), _T("钢13"), _T("钢16") };
	vec2.push_back({ 0.222, 26.5,28.1,29.4,30.4,33.2,-1,-1});
	vec2.push_back({ 0.281, 33.5, 35.6, 37.3, 38.4, 42, -1, -1 });
	vec2.push_back({ 0.313, 37.3, 39.7, 41.5, 42.8, 46.8, -1, -1 });
	vec2.push_back({ 41.3, 44, 46, 47.5, 51.9, -1, -1 });
	vec2.push_back({ 50, 53.2, 55.6, 57.4, 62.8, -1, -1 });
	vec2.push_back({ 59.5, 63.3, 66.2, 68.4, 74.7, -1, -1 });
	vec2.push_back({ 0.313, 37.3, 39.7, 41.5, 42.8, 46.8 });
	vec2.push_back({ 0.313, 37.3, 39.7, 41.5, 42.8, 46.8 });

}

CDiameter::~CDiameter()
{
}

void CDiameter::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_ctllist);
}


BEGIN_MESSAGE_MAP(CDiameter, CDialogEx)
END_MESSAGE_MAP()


// CDiameter message handlers
