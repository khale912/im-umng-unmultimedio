#include "StdAfx.h"
#include "Grafica.h"

CGrafica::CGrafica(void)
{
	Ancho=800;
	Alto=600;
	EscX=EscY=1;
	cg=RGB(20,20,200);
}

CGrafica::~CGrafica(void)
{
}

void CGrafica::PintarPlano(CDC *dc)
{
	CString n;
	int i=0;
	EjeY.SetPtoI(Ancho/2,Alto/6);
	EjeY.SetPtoF(Ancho/2,5*Alto/6);
	EjeX.SetPtoI(Ancho/6,Alto/2);
	EjeX.SetPtoF(5*Ancho/6,Alto/2);
	EjeY.DDA(dc);
	EjeX.DDA(dc);
	dc->SetPixel(Ancho/6+1,Alto/2+1,RGB(0,0,0));
	dc->SetPixel(Ancho/6+2,Alto/2+2,RGB(0,0,0));
	dc->SetPixel(Ancho/6+3,Alto/2+3,RGB(0,0,0));
	dc->SetPixel(Ancho/6+1,Alto/2-1,RGB(0,0,0));
	dc->SetPixel(Ancho/6+2,Alto/2-2,RGB(0,0,0));
	dc->SetPixel(Ancho/6+3,Alto/2-3,RGB(0,0,0));
	dc->SetPixel(5*Ancho/6-2,Alto/2+1,RGB(0,0,0));
	dc->SetPixel(5*Ancho/6-3,Alto/2+2,RGB(0,0,0));
	dc->SetPixel(5*Ancho/6-4,Alto/2+3,RGB(0,0,0));
	dc->SetPixel(5*Ancho/6-2,Alto/2-1,RGB(0,0,0));
	dc->SetPixel(5*Ancho/6-3,Alto/2-2,RGB(0,0,0));
	dc->SetPixel(5*Ancho/6-4,Alto/2-3,RGB(0,0,0));
	dc->SetPixel(Ancho/2+1,Alto/6+1,RGB(0,0,0));
	dc->SetPixel(Ancho/2+2,Alto/6+2,RGB(0,0,0));
	dc->SetPixel(Ancho/2+3,Alto/6+3,RGB(0,0,0));
	dc->SetPixel(Ancho/2-1,Alto/6+1,RGB(0,0,0));
	dc->SetPixel(Ancho/2-2,Alto/6+2,RGB(0,0,0));
	dc->SetPixel(Ancho/2-3,Alto/6+3,RGB(0,0,0));
	dc->SetPixel(Ancho/2+1,5*Alto/6-2,RGB(0,0,0));
	dc->SetPixel(Ancho/2+2,5*Alto/6-3,RGB(0,0,0));
	dc->SetPixel(Ancho/2+3,5*Alto/6-4,RGB(0,0,0));
	dc->SetPixel(Ancho/2-1,5*Alto/6-2,RGB(0,0,0));
	dc->SetPixel(Ancho/2-2,5*Alto/6-3,RGB(0,0,0));
	dc->SetPixel(Ancho/2-3,5*Alto/6-4,RGB(0,0,0));
	n="0";
	dc->TextOutW(Ancho/2-10,Alto/2+5,n);
	n="x(rad)";
	dc->TextOutW(5*Ancho/6+2,Alto/2-10,n);
	n="sen(x)";
	dc->TextOutW(Ancho/2-15,Alto/6-20,n);
	n="pi";
	while(Ancho/2+(EscX*i)<5*Ancho/6-2)
	{
		dc->SetPixel(Ancho/2+(EscX*i),Alto/2+1,RGB(0,0,0));
		dc->SetPixel(Ancho/2+(EscX*i),Alto/2+2,RGB(0,0,0));
		dc->SetPixel(Ancho/2+(EscX*i),Alto/2-1,RGB(0,0,0));
		dc->SetPixel(Ancho/2+(EscX*i),Alto/2-2,RGB(0,0,0));
		dc->SetPixel(Ancho/2-(EscX*i),Alto/2+1,RGB(0,0,0));
		dc->SetPixel(Ancho/2-(EscX*i),Alto/2+2,RGB(0,0,0));
		dc->SetPixel(Ancho/2-(EscX*i),Alto/2-1,RGB(0,0,0));
		dc->SetPixel(Ancho/2-(EscX*i),Alto/2-2,RGB(0,0,0));
		i+=28;
		if((i==56)&&(Ancho/2+(EscX*i)<5*Ancho/6-2))
			dc->TextOutW(Ancho/2+(EscX*i)-2,Alto/2+3,n);
	}
	i=0;
	n="1";
	while(Alto/2+(EscY*i)<5*Alto/6-2)
	{
		dc->SetPixel(Ancho/2+1,Alto/2+(EscY*i),RGB(0,0,0));
		dc->SetPixel(Ancho/2+2,Alto/2+(EscY*i),RGB(0,0,0));
		dc->SetPixel(Ancho/2-1,Alto/2+(EscY*i),RGB(0,0,0));
		dc->SetPixel(Ancho/2-2,Alto/2+(EscY*i),RGB(0,0,0));
		dc->SetPixel(Ancho/2+1,Alto/2-(EscY*i),RGB(0,0,0));
		dc->SetPixel(Ancho/2+2,Alto/2-(EscY*i),RGB(0,0,0));
		dc->SetPixel(Ancho/2-1,Alto/2-(EscY*i),RGB(0,0,0));
		dc->SetPixel(Ancho/2-2,Alto/2-(EscY*i),RGB(0,0,0));
		i+=40;
		if((i==40)&&(Alto/2+(EscY*i)<5*Alto/6-2))
			dc->TextOutW(Ancho/2-10,Alto/2-(EscY*i)-5,n);
	}
}

void CGrafica::Seno(CDC *dc)
{
	float theta;
	//clock_t endwait;
	for(int i=Ancho/6+2; i<5*Ancho/6-2; i++)
	{
		//endwait = clock()+0.001*CLOCKS_PER_SEC;
		//while (clock()<endwait){}
		theta=(i-(Ancho/2))/(18*EscX);
		if((Alto/2-(sin(theta)*40*EscY)>Alto/6)&&(Alto/2-(sin(theta)*40*EscY)<5*Alto/6))
		{
			dc->SetPixel(i,Alto/2-(sin(theta)*40*EscY),cg);
			//dc->SetPixel(i,Alto/2-(cos(theta)*40*EscY),RGB(200,20,20));
			//dc->SetPixel(i,Alto/2-(tan(theta)*40*EscY),RGB(20,200,20));
		}
	}
}