#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main ()
{

		float min, ta, t;


	
	
	setlocale (LC_ALL, "portuguese");
	
	cout<<"Informe os minutos de conversação" <<endl;
	cin>>min;
	
	if (min <200)
	{
	ta=0;
	}
	
	else if (min >=200)
	{
		ta=min*0.02;
		
	}
	
	else if (min>=400)
	{
		ta=min*0.01;
	}
	
	else
	{
		cout<<"nao foi possivel calcular";
	}
	
	
	t=ta+31.44;
	
	cout<<"valor a ser pago"<<endl <<t;

	
}
