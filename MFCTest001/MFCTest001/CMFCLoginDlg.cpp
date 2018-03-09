#include "stdafx.h"
#include "resource.h"
#include "CMFCLoginDlg.h"

CMFCLoginDlg::CMFCLoginDlg(CWnd * pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
{
}

CMFCLoginDlg::~CMFCLoginDlg()
{
}
BEGIN_MESSAGE_MAP(CMFCLoginDlg, CDialog)
	ON_BN_CLICKED(IDCANCEL, &CMFCLoginDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &CMFCLoginDlg::OnBnClickedOk)
END_MESSAGE_MAP()


void CMFCLoginDlg::OnBnClickedCancel()
{
	EndDialog(1);
	//CDialog::OnCancel();
}


void CMFCLoginDlg::OnBnClickedOk()
{
	CString userName;
	CString password;
	GetDlgItemText(IDC_EDIT1, userName);
	GetDlgItemText(IDC_EDIT2, password);
	if (userName.CompareNoCase(_T("admin")) == 0 && password.Compare(_T("123456")) == 0) EndDialog(2);
	else SetDlgItemText(IDC_EDIT3,_T("�û��������������"));
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CDialog::OnOK();
}


BOOL CMFCLoginDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	CTime time = CTime::GetCurrentTime();
	CString str;
	str.Format(_T("%d��%02d��%02d��%02dʱ%02d��"), 
		time.GetYear(), time.GetMonth(), time.GetDay(),
		time.GetHour(),time.GetMinute());


	SetDlgItemText(IDC_EDIT3,str);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
