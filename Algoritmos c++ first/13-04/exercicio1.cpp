#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;


	float n1,n2,p1,p2, media;
	
int main()
{
	(LC_ALL, "Portuguese");
	
	cout<<"Digite Nota 1   ";
	cin>> n1;
	
	cout<<"Digite Nota 2   ";
	cin>>n2;
	
	cout<<"Digite o Peso 1   ";
	cin>>p1;
	
	cout<< "Digite o Peso 2    ";
	cin>>p2;
	
	media = n1*p1 + n2*p2/p1+p2;

	if (media >=6)
	{
		cout<<"Aprovado";	
	}

	else
	{
		cout<<"Reprovado";
	}
	
	
	
	
	
	
}
