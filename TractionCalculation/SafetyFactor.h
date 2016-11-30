#pragma once


// CSafetyFactor dialog

class CSafetyFactor : public CDialogEx
{
	DECLARE_DYNAMIC(CSafetyFactor)

public:
	CSafetyFactor(CString pos, double dt, CString type,double beta,double gama,CWnd* pParent = NULL);   // standard constructor
	virtual ~CSafetyFactor();

// Dialog Data
	enum { IDD = IDD_SAFETY_FACTOR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
