#pragma once


// Cuadro de di�logo de CDatos

class CDatos : public CDialog
{
	DECLARE_DYNAMIC(CDatos)

public:
	CDatos(CWnd* pParent = NULL);   // Constructor est�ndar
	virtual ~CDatos();

// Datos del cuadro de di�logo
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnEnChangeEdit1();
	//Translaci�n en X y Y
	float Tx;
	float Ty;

	afx_msg void OnBnClickedButton1();
	//Escalamiento en X y Y
	double Sx;
	double Sy;

	//Rotaci�n en eje
	float Theta;

	//Transformacion Libre
	float p11;
	float p21;
	float p31;
	float p12;
	float p22;
	float p32;
	float p13;
	float p23;
	float p33;

	// Reflexiones en X y Y
	BOOL Rx;
	BOOL Ry;
};
