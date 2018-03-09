
// MFCTest001.cpp: 定义应用程序的类行为。
//

#include "stdafx.h"
#include "MFCTest001.h"
#include "MFCTest001Dlg.h"
#include "CMFCLoginDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest001App

BEGIN_MESSAGE_MAP(CMFCTest001App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCTest001App 构造

CMFCTest001App::CMFCTest001App()
{
	// TODO: 在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的 CMFCTest001App 对象

CMFCTest001App theApp;


// CMFCTest001App 初始化

BOOL CMFCTest001App::InitInstance()
{
	CWinApp::InitInstance();

	CMFCLoginDlg log;
	INT_PTR nResponse =  log.DoModal();
	if (nResponse == 1)return FALSE;


	CMFCTest001Dlg dlg;
	nResponse = dlg.DoModal();

	return FALSE;
}

