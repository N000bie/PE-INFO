#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// ResouceDlg �Ի���

class ResouceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ResouceDlg)

public:
	ResouceDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ResouceDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	void SetItemText(CString text, DWORD id);
	CString ResouceDlg::GetItemTextHex(DWORD hex);
	CString getName(DWORD id);
	void  LoadMemImage(void *  pMemData, long  len);
	void writeData(CString path);
	void writeICO(CString path);
	CString Show();
public:
	CTreeCtrl m_tree;
	virtual BOOL OnInitDialog();
	afx_msg void OnSelchangedTree(NMHDR *pNMHDR, LRESULT *pResult);
	CStatic m_pic;
	afx_msg void OnBnClickedSave();
};
