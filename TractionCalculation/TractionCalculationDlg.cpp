
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



//CTractionCalculationDlg::CTractionCalculationDlg(CWnd* pParent /*=NULL*/)
//	: CDialogEx(CTractionCalculationDlg::IDD, pParent)
//{
//	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
//}

//CTractionCalculationDlg::CTractionCalculationDlg(UINT nIDCaption, CWnd* pParentWnd/* = NULL*/, UINT iSelectPage/* = 0*/)
//	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
//{
//	AddPage(&m_torque);
//	//AddPage(&m_work);
//}

CTractionCalculationDlg::CTractionCalculationDlg(LPCTSTR pszCaption, CWnd* pParentWnd/* = NULL*/, UINT iSelectPage/* = 0*/)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
	AddPage(&m_traction);
	AddPage(&m_torque);
	//AddPage(&m_work);
}

void CTractionCalculationDlg::DoDataExchange(CDataExchange* pDX)
{
	CPropertySheet::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTractionCalculationDlg, CPropertySheet)
	ON_WM_SYSCOMMAND()
	//ON_WM_PAINT()
	//ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CTractionCalculationDlg ��Ϣ�������

BOOL CTractionCalculationDlg::OnInitDialog()
{
	CPropertySheet::OnInitDialog();

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

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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
		CPropertySheet::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

//void CTractionCalculationDlg::OnPaint()
//{
//	if (IsIconic())
//	{
//		CPaintDC dc(this); // ���ڻ��Ƶ��豸������
//
//		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);
//
//		// ʹͼ���ڹ����������о���
//		int cxIcon = GetSystemMetrics(SM_CXICON);
//		int cyIcon = GetSystemMetrics(SM_CYICON);
//		CRect rect;
//		GetClientRect(&rect);
//		int x = (rect.Width() - cxIcon + 1) / 2;
//		int y = (rect.Height() - cyIcon + 1) / 2;
//
//		// ����ͼ��
//		dc.DrawIcon(x, y, m_hIcon);
//	}
//	else
//	{
//		CDialogEx::OnPaint();
//	}
//}
//
////���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
////��ʾ��
//HCURSOR CTractionCalculationDlg::OnQueryDragIcon()
//{
//	return static_cast<HCURSOR>(m_hIcon);
//}

