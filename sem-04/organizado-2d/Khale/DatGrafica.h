#pragma once


// Cuadro de di�logo de CDatGrafica

class CDatGrafica : public CDialog
{
	DECLARE_DYNAMIC(CDatGrafica)

public:
	CDatGrafica(CWnd* pParent = NULL);   // Constructor est�ndar
	virtual ~CDatGrafica();

// Datos del cuadro de di�logo
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	float sx;
	float sy;
	afx_msg void OnBnClickedButton1();
};
