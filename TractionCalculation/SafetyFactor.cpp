// SafetyFactor.cpp : implementation file
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "SafetyFactor.h"
#include "afxdialogex.h"


// CSafetyFactor dialog

IMPLEMENT_DYNAMIC(CSafetyFactor, CDialogEx)

CSafetyFactor::CSafetyFactor(CString pos, double dt, CString type, double beta, double gama, CWnd* pParent /*=NULL*/)
	: CDialogEx(CSafetyFactor::IDD, pParent)
{

}

CSafetyFactor::~CSafetyFactor()
{
}

void CSafetyFactor::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSafetyFactor, CDialogEx)
END_MESSAGE_MAP()


// CSafetyFactor message handlers
