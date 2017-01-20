// SectionDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PELoad.h"
#include "SectionDlg.h"
#include "afxdialogex.h"
#include "info.h"
#include "vector"
extern std::vector<IMAGE_SECTION_HEADER>SectionDetail;
// SectionDlg �Ի���

IMPLEMENT_DYNAMIC(SectionDlg, CDialogEx)

SectionDlg::SectionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

SectionDlg::~SectionDlg()
{
}

void SectionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(SectionDlg, CDialogEx)
END_MESSAGE_MAP()


// SectionDlg ��Ϣ�������


BOOL SectionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	CRect rect;

	// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С   
	m_list.GetClientRect(&rect);

	// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����   
	m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// Ϊ�б���ͼ�ؼ��������   
	m_list.InsertColumn(0, _T("name"), LVCFMT_CENTER, rect.Width() / 6, 0);
	m_list.InsertColumn(1, _T("VOffset"), LVCFMT_CENTER, rect.Width() / 6, 1);
	m_list.InsertColumn(2, _T("VSize"), LVCFMT_CENTER, rect.Width() / 6, 2);
	m_list.InsertColumn(3, _T("ROffset"), LVCFMT_CENTER, rect.Width() / 6, 3);
	m_list.InsertColumn(4, _T("RSize"), LVCFMT_CENTER, rect.Width() / 6, 4);
	m_list.InsertColumn(5, _T("Character"), LVCFMT_CENTER, rect.Width() / 6, 5);


	CString cs;

	for (int i = 0; i < SectionDetail.size(); i++)
	{
		m_list.InsertItem(i, CString(SectionDetail[i].Name));
		cs.Format(L"%08X", SectionDetail[i].VirtualAddress);
		m_list.SetItemText(i, 1, cs);
		cs.Format(L"%08X", SectionDetail[i].Misc);
		m_list.SetItemText(i, 2, cs);
		cs.Format(L"%08X", SectionDetail[i].PointerToRawData);
		m_list.SetItemText(i, 3, cs);
		cs.Format(L"%08X", SectionDetail[i].SizeOfRawData);
		m_list.SetItemText(i, 4, cs);
		cs.Format(L"%08X", SectionDetail[i].Characteristics);
		m_list.SetItemText(i, 5, cs);
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
