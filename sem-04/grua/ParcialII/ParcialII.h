// ParcialII.h: archivo de encabezado principal para la aplicaci�n ParcialII
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"       // S�mbolos principales


// CParcialIIApp:
// Consulte la secci�n ParcialII.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CParcialIIApp : public CWinApp
{
public:
	CParcialIIApp();


// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CParcialIIApp theApp;