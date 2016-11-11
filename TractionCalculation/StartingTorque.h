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
};
