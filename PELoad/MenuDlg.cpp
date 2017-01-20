// MenuDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PELoad.h"
#include "MenuDlg.h"
#include "afxdialogex.h"
#include "vector"

// MenuDlg �Ի���

IMPLEMENT_DYNAMIC(MenuDlg, CDialogEx)

std::vector<WCHAR*>nameVec;
extern std::vector<IMAGE_DATA_DIRECTORY>directoryVec;;

static void  initNameVec()
{
	if (nameVec.empty())
	{

		nameVec.push_back(L"�����");
		nameVec.push_back(L"�����");
		nameVec.push_back(L"��Դ");
		nameVec.push_back(L"����");
		nameVec.push_back(L"��ȫ");
		nameVec.push_back(L"�ض�λ");
		nameVec.push_back(L"����");
		nameVec.push_back(L"��Ȩ");
		nameVec.push_back(L"ȫ������");
		nameVec.push_back(L"TLS��");
		nameVec.push_back(L"��������");
		nameVec.push_back(L"װ������");
		nameVec.push_back(L"IAT");
		nameVec.push_back(L"�ӳ�����");
		nameVec.push_back(L"COM");
		nameVec.push_back(L"����");
	}
}

MenuDlg::MenuDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{
	initNameVec();
}

MenuDlg::~MenuDlg()
{
}

void MenuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(MenuDlg, CDialogEx)
END_MESSAGE_MAP()


// MenuDlg ��Ϣ�������


BOOL MenuDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	CRect rect;

	// ��ȡ��������б���ͼ�ؼ���λ�úʹ�С   
	m_list.GetClientRect(&rect);

	// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����   
	m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// Ϊ�б���ͼ�ؼ��������   
	m_list.InsertColumn(0, _T("Ŀ¼��"), LVCFMT_CENTER, rect.Width() / 3, 0);
	m_list.InsertColumn(1, _T("RVA"), LVCFMT_CENTER, rect.Width() / 3, 1);
	m_list.InsertColumn(2, _T("����"), LVCFMT_CENTER, rect.Width() / 3, 2);
	initNameVec();
	CString cs;
	for (int i = 0; i < nameVec.size(); i++)
	{
		m_list.InsertItem(i, nameVec[i]);
		cs.Format(L"%08X", directoryVec[i].VirtualAddress);
		m_list.SetItemText(i, 1, cs);
		cs.Format(L"%08X", directoryVec[i].Size);
		m_list.SetItemText(i, 2, cs);
	}



	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
