
// TractionCalculationDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "TractionCalculationDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CTractionCalculationDlg �Ի���



CTractionCalculationDlg::CTractionCalculationDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTractionCalculationDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

//CTractionCalculationDlg::CTractionCalculationDlg(UINT nIDCaption, CWnd* pParentWnd/* = NULL*/, UINT iSelectPage/* = 0*/)
//	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
//{
//	AddPage(&m_torque);
//	//AddPage(&m_work);
//}

//CTractionCalculationDlg::CTractionCalculationDlg(LPCTSTR pszCaption, CWnd* pParentWnd/* = NULL*/, UINT iSelectPage/* = 0*/)
//	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
//{
//	AddPage(&m_traction);
//	AddPage(&m_torque);
//	//AddPage(&m_work);
//}

void CTractionCalculationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_tabCtl);
}

BEGIN_MESSAGE_MAP(CTractionCalculationDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CTractionCalculationDlg::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// CTractionCalculationDlg ��Ϣ�������

BOOL CTractionCalculationDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	//���ѡ�����
	m_tabCtl.InsertItem(0, L"ҷ��������");
	m_tabCtl.InsertItem(1, L"ҷ��������ת��");

	//����IDC_TAB1Ϊ������
	m_page1.Create(IDD_TRACTION2, GetDlgItem(IDC_TAB1));
	m_page2.Create(IDD_TORQUE, GetDlgItem(IDC_TAB1));

	//���IDC_TABTEST�ͻ�����С
	CRect rc;
	m_tabCtl.GetClientRect(&rc);

	//�����ӶԻ����ڸ������е�λ��
	rc.top += 30;
	rc.bottom -= 8;
	rc.left += 8;
	rc.right -= 8;

	//�����ӶԻ���ߴ粢�ƶ���ָ��λ��
	m_page1.MoveWindow(&rc);
	m_page2.MoveWindow(&rc);

	//�ֱ��������غ���ʾ
	m_page1.ShowWindow(true);
	m_page2.ShowWindow(false);

	//����Ĭ�ϵ�ѡ�
	m_tabCtl.SetCurSel(0);
	return FALSE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CTractionCalculationDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CTractionCalculationDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CTractionCalculationDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTractionCalculationDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: Add your control notification handler code here
	int CurSel = m_tabCtl.GetCurSel();

	switch (CurSel)
	{
	case 0:
		m_page1.ShowWindow(true);
		m_page2.ShowWindow(false);
		break;
	case 1:
		m_page1.ShowWindow(false);
		m_page2.ShowWindow(true);
		break;
	}
	*pResult = 0;
}
