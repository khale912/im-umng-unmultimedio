// KhaleDoc.cpp: implementaci�n de la clase CKhaleDoc
//

#include "stdafx.h"
#include "Khale.h"

#include "KhaleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CKhaleDoc

IMPLEMENT_DYNCREATE(CKhaleDoc, CDocument)

BEGIN_MESSAGE_MAP(CKhaleDoc, CDocument)
END_MESSAGE_MAP()


// Construcci�n o destrucci�n de CKhaleDoc

CKhaleDoc::CKhaleDoc()
{
	// TODO: agregar aqu� el c�digo de construcci�n �nico

}

CKhaleDoc::~CKhaleDoc()
{
}

BOOL CKhaleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: agregar aqu� c�digo de reinicio
	// (los documentos SDI volver�n a utilizar este documento)

	return TRUE;
}




// Serializaci�n de CKhaleDoc

void CKhaleDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: agregar aqu� el c�digo de almacenamiento
	}
	else
	{
		// TODO: agregar aqu� el c�digo de carga
	}
}


// Diagn�sticos de CKhaleDoc

#ifdef _DEBUG
void CKhaleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CKhaleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Comandos de CKhaleDoc
