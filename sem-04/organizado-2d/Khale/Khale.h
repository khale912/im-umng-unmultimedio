// Khale.h: archivo de encabezado principal para la aplicaci�n Khale
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"       // S�mbolos principales


// CKhaleApp:
// Consulte la secci�n Khale.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CKhaleApp : public CWinApp
{
public:
	CKhaleApp();


// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CKhaleApp theApp;