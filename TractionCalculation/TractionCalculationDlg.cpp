
// TractionCalculationDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "TractionCalculation.h"
#include "TractionCalculationDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CTractionCalculationDlg 对话框



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


// CTractionCalculationDlg 消息处理程序

BOOL CTractionCalculationDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	//添加选项卡名称
	m_tabCtl.InsertItem(0, L"曳引力计算");
	m_tabCtl.InsertItem(1, L"曳引力启动转矩");

	//设置IDC_TAB1为父窗口
	m_page1.Create(IDD_TRACTION2, GetDlgItem(IDC_TAB1));
	m_page2.Create(IDD_TORQUE, GetDlgItem(IDC_TAB1));

	//获得IDC_TABTEST客户区大小
	CRect rc;
	m_tabCtl.GetClientRect(&rc);

	//调整子对话框在父窗口中的位置
	rc.top += 30;
	rc.bottom -= 8;
	rc.left += 8;
	rc.right -= 8;

	//设置子对话框尺寸并移动到指定位置
	m_page1.MoveWindow(&rc);
	m_page2.MoveWindow(&rc);

	//分别设置隐藏和显示
	m_page1.ShowWindow(true);
	m_page2.ShowWindow(false);

	//设置默认的选项卡
	m_tabCtl.SetCurSel(0);
	return FALSE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CTractionCalculationDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
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
