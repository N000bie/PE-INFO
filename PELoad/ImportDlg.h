#pragma once
#include "afxcmn.h"


// ImportDlg �Ի���

class ImportDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ImportDlg)

public:
	ImportDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ImportDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMPORTDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	virtual BOOL OnInitDialog();
	CListCtrl m_listdetail;
	IMAGE_SECTION_HEADER*ish_;
	afx_msg void OnNMClickListShowDetail(NMHDR *pNMHDR, LRESULT *pResult);
};
