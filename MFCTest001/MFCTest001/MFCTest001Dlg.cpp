
// MFCTest001Dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCTest001.h"
#include "MFCTest001Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest001Dlg 对话框



CMFCTest001Dlg::CMFCTest001Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_MFCTEST001_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCTest001Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCTest001Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CMFCTest001Dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CMFCTest001Dlg 消息处理程序

BOOL CMFCTest001Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCTest001Dlg::OnPaint()
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
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCTest001Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCTest001Dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	//SetDlgItemInt(IDC_EDIT3, GetDlgItemInt(IDC_EDIT1)+ GetDlgItemInt(IDC_EDIT2));
	CString str;
	GetDlgItemText(IDC_EDIT1, str);
	int i = _ttoi(str);
	GetDlgItemText(IDC_EDIT2,str);
	int j = _ttoi(str);
	str.Format(_T("%d"),i+j);
	SetDlgItemText(IDC_EDIT3, str);

	//CDialog::OnOK();
}
