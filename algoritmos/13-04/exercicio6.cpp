#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;

int main()
{
	
	
	
	float  ip ;
	
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Informe o indice de poluiçao   ";
	cin>>ip;
	
	
	if (ip<=0.30)
	{
	cout<<"Empresa funciona normalmente";
	}
	
	else if (ip>0.30 && ip <=0.40)
	{
		cout<<"Industrias A, favor paralisarem o funcionamento";
	}
	
	else if (ip > 0.40 && ip <=0.50)
	{
		cout<<"Industrias B, favor paralisarem o funcionamento";
	}
	
	else 
	{
		cout<<"Todas paralisam o funcionamento";
	}
	
}
	
