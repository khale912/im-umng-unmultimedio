// ParcialIIDoc.cpp: implementaci�n de la clase CParcialIIDoc
//

#include "stdafx.h"
#include "ParcialII.h"

#include "ParcialIIDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CParcialIIDoc

IMPLEMENT_DYNCREATE(CParcialIIDoc, CDocument)

BEGIN_MESSAGE_MAP(CParcialIIDoc, CDocument)
END_MESSAGE_MAP()


// Construcci�n o destrucci�n de CParcialIIDoc

CParcialIIDoc::CParcialIIDoc()
{
	// TODO: agregar aqu� el c�digo de construcci�n �nico

}

CParcialIIDoc::~CParcialIIDoc()
{
}

BOOL CParcialIIDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: agregar aqu� c�digo de reinicio
	// (los documentos SDI volver�n a utilizar este documento)

	return TRUE;
}




// Serializaci�n de CParcialIIDoc

void CParcialIIDoc::Serialize(CArchive& ar)
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


// Diagn�sticos de CParcialIIDoc

#ifdef _DEBUG
void CParcialIIDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CParcialIIDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Comandos de CParcialIIDoc
