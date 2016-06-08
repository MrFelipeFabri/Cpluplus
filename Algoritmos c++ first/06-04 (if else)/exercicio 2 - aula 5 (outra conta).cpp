#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	float pct, khw,resultado, total, icms;
	
	cout<<"Valor cobrado   " <<endl;
	cin>>khw;
	
	if (khw <= 100)
	{
	pct = khw*0.08;
	resultado = khw+pct;
	}
	
	else if ( khw <= 200)
	{
		pct = khw*0.10;
		resultado = khw+pct;
		
	}
	
	else if (khw <=500)
	{
		pct = khw*0.12;
			resultado = khw+pct;
	
	}	
	
	else 
	{
		pct = khw*0.15;
			resultado = khw+pct;
	}
	

	icms=(resultado*0.18);
	total= resultado+icms;
	
	
	cout<<"Valor a ser pago   " <<resultado <<endl;
	cout<<"ICMS   "<<icms <<endl;
	cout<<"total   "<<total <<endl ;
	
	getch();
	
}
