
// PELoad.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPELoadApp: 
// �йش����ʵ�֣������ PELoad.cpp
//

class CPELoadApp : public CWinApp
{
public:
	CPELoadApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPELoadApp theApp;