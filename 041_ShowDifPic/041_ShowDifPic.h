
// 041_ShowDifPic.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy041_ShowDifPicApp: 
// �йش����ʵ�֣������ 041_ShowDifPic.cpp
//

class CMy041_ShowDifPicApp : public CWinApp
{
public:
	CMy041_ShowDifPicApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy041_ShowDifPicApp theApp;