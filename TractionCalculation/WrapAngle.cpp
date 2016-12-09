// WrapAngle.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "WrapAngle.h"
#include "afxdialogex.h"
#include <math.h>

// CWrapAngle dialog

IMPLEMENT_DYNAMIC(CWrapAngle, CDialogEx)

CWrapAngle::CWrapAngle(BOOL radio, CString way, double dt, double ddp, double la, double h1, double alpha1, double alpha2, CWnd* pParent /*=NULL*/)
	: CDialogEx(CWrapAngle::IDD, pParent)
	, m_radio1(FALSE)
	, m_dt(dt)
	, m_ddp(ddp)
	, m_la(la)
	, m_h1(h1)
	, m_alpha1(alpha1)
	, m_alpha2(alpha2)
{
	strWay = way;
	m_radio1 = radio;
}

CWrapAngle::~CWrapAngle()
{
}

void CWrapAngle::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO1, m_radio1);
	DDX_Control(pDX, IDC_WAY, m_way);
	DDX_Text(pDX, IDC_DT, m_dt);
	DDV_MinMaxDouble(pDX, m_dt, 0, 1e+30);
	DDX_Text(pDX, IDC_DDP, m_ddp);
	DDV_MinMaxDouble(pDX, m_ddp, 0, 1e+30);
	DDX_Text(pDX, IDC_LA, m_la);
	DDV_MinMaxDouble(pDX, m_la, 0, 1e+30);
	DDX_Text(pDX, IDC_H1, m_h1);
	DDV_MinMaxDouble(pDX, m_h1, 0, 1e+30);
	DDX_Text(pDX, IDC_ALPHA1, m_alpha1);
	DDX_Text(pDX, IDC_ALPHA2, m_alpha2);
}


BEGIN_MESSAGE_MAP(CWrapAngle, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO1, &CWrapAngle::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CWrapAngle::OnBnClickedRadio1)
	ON_CBN_SELCHANGE(IDC_WAY, &CWrapAngle::OnCbnSelchangeWay)
	ON_BN_CLICKED(IDOK, &CWrapAngle::OnBnClickedOk)
	ON_BN_CLICKED(ID_CALC, &CWrapAngle::OnBnClickedCalc)
END_MESSAGE_MAP()


// CWrapAngle message handlers


void CWrapAngle::OnBnClickedRadio1()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if (m_radio1==0)
	{	
		SetDlgItemText(IDC_STATIC_LA, _T("水平中心距LA"));	
	}
	else{
		SetDlgItemText(IDC_STATIC_LA, _T("钢丝绳中心距L"));
	}
	UpdateData(FALSE);
}


BOOL CWrapAngle::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  Add extra initialization here
	m_way.AddString(_T("单绕"));
	m_way.AddString(_T("复绕"));
	int i = strWay == _T("单绕") ? 0 : 1;
	m_way.SetCurSel(i);
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void CWrapAngle::OnCbnSelchangeWay()
{
	// TODO: Add your control notification handler code here
	
	int nSel;

	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_way.GetCurSel();
	// 根据选中项索引获取该项字符串   
	m_way.GetLBText(nSel, strWay);
}


void CWrapAngle::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}


void CWrapAngle::OnBnClickedCalc()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if (m_radio1 == 0)
	{
		if (m_ddp == 0)
		{
			m_alpha1 = 180 + 360 * (strWay == "复绕");
		}
		else{
			double temp1, temp2;
			temp1 = 90 + asin((m_dt - m_ddp) / (2 * sqrt(m_la*m_la + m_h1*m_h1))) * 180 / pi;
			temp2 = 90 - atan(m_la / m_h1) * 180 / pi;
			m_alpha1 = temp1 + temp2 + 2 * (strWay == "复绕")*temp1;
		}

	}
	else{
		if (m_ddp == 0)
		{
			m_alpha1 = 180 + 360 * (strWay == "复绕");
		}
		else{
			double temp1, temp2, temp3;
			temp1 = m_la - m_dt / 2 - m_ddp / 2;
			temp2 = 90 + asin((m_dt - m_ddp) / (2 * sqrt(temp1*temp1 + m_h1*m_h1))) * 180 / pi;
			temp3 = 90 - atan(temp1 / m_h1) * 180 / pi;
			m_alpha1 = temp2 + temp3 + 2 * (strWay == "复绕")*temp2;
		}
	}
	m_alpha2 = m_alpha1*pi / 180;
	NumFormat(m_alpha1);
	UpdateData(FALSE);
}
