#pragma once
class CMFCLoginDlg : public CDialog
{
public:
	CMFCLoginDlg(CWnd* pParent = NULL);
	~CMFCLoginDlg();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};

