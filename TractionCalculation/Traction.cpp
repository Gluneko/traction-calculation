// Traction.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "Traction.h"
#include "afxdialogex.h"


// CTraction dialog

IMPLEMENT_DYNAMIC(CTraction, CPropertyPage)

CTraction::CTraction()
	: CPropertyPage(CTraction::IDD)
{
	
}

CTraction::~CTraction()
{
	
}

void CTraction::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTraction, CPropertyPage)
	ON_EN_SETFOCUS(IDC_QC, &CTraction::OnEnSetfocusQc)
	ON_BN_CLICKED(IDC_BTN_CALC, &CTraction::OnBnClickedBtnCalc)
	ON_EN_CHANGE(IDC_EDIT19, &CTraction::OnEnChangeEdit19)
END_MESSAGE_MAP()


// CTraction message handlers


void CTraction::OnEnSetfocusQc()
{
	// TODO: Add your control notification handler code here
	//CCompensationChain dlg(this);
	//CCompensationChain dlg;
	//dlg.DoModal();
	CTestDlg dlg;
	dlg.doModal();
}


void CTraction::OnBnClickedBtnCalc()
{
	// TODO: Add your control notification handler code here
	//CCompensationChain dlg;
	//dlg.DoModal();
}


void CTraction::OnEnChangeEdit19()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CPropertyPage::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
