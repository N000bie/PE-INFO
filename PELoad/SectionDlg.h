#pragma once
#include "afxcmn.h"


// SectionDlg �Ի���

class SectionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(SectionDlg)

public:
	SectionDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SectionDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	virtual BOOL OnInitDialog();
};
