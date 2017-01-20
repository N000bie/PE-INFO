
// PELoadDlg.h : ͷ�ļ�
//

#pragma once
#include "vector"
#include "info.h"
// CPELoadDlg �Ի���
class CPELoadDlg : public CDialogEx
{
// ����
public:
	CPELoadDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PELOAD_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

	private:
		void InitFile(TCHAR*path);
		void initParam();
		void SetItemText(CString text, DWORD id);
		void SetItemTextHex(DWORD hex, DWORD id);
		void ShowBasicInfo( PVOID ioh);
		void MenuClick();
		void getResource();
		void deepFind(IMAGE_RESOURCE_DIRECTORY *ird, int depth, IMAGE_RESOURCE_DIRECTORY *orignal, std::vector<ResouceNode>&rscVec);
// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	

private:
	void ExportDlgClick();
	void ImportDlgClick();
public:
	afx_msg void OnImport();
	afx_msg void OnExport();
	afx_msg void OnOpnfileClick();
	afx_msg void OnSectionDlgClick();
	afx_msg void OnMenuDlgClick();
	afx_msg void OnResouceDlgClick();
};
