
// TractionCalculation.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTractionCalculationApp: 
// �йش����ʵ�֣������ TractionCalculation.cpp
//

class CTractionCalculationApp : public CWinApp
{
public:
	CTractionCalculationApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTractionCalculationApp theApp;

void NumFormat(double& m_aa);//������λС��