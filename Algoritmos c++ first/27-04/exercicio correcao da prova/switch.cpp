#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

     
int main()
{
	int pais;
	float imp,valorproduto,valorfinal;
	
	cout<<"Digite um nr, entre 1 e 6   ";
	cin>>pais;
	
	
	switch (pais)
	{
		case 1: cout<<"2%\n" ; imp = 0.02; break;
		case 2: cout<<"5%\n" ; imp = 0.05; break;  
		case 3: cout<<"3%\n" ; imp = 0.03; break;
		case 4: cout<<"6%\n" ; imp = 0.06; break;
		case 5: cout<<"10%\n"; imp = 0.10; break;
		case 6: cout<<"5%\n" ; imp = 0.05; break;
		default: cout<<"\nNro invalido"<<endl;	
	}
	
		cout<<"Digite o valor do produto   ";
		cin>>valorproduto;
	
		valorfinal=valorproduto+(valorproduto*imp);
		cout<<"Qual o valor final do produto  "<<valorfinal;
	
	
	
	
}
