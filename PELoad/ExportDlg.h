#pragma once
#include "afxcmn.h"


// ExportDlg �Ի���

class ExportDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ExportDlg)

public:
	ExportDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ExportDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	virtual BOOL OnInitDialog();
};
