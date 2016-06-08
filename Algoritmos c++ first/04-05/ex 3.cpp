#include<iostream>

using namespace std;

     	float salario,salminimo, adicional,inss,total,filhos;
int main()
{
	
	cout<<"Digite o salario:   ";
	cin>>salario;
	
	cout <<"Digite o salario minimo:   ";
	cin>>salminimo;
	
	cout<<"Digite a quantidade de filhos   ";
	cin>>filhos;
	
	if (salario <=2000)
	{
		filhos=(filhos*100);
		total = (salario+(salminimo/2)+filhos);
		inss=0.15;
		
		cout<<"O salario liquido de:   "<<((total*inss)+total);
	}
	
	else if (salario <=2000 || salario >=3000)
	{
		filhos=(filhos*80);
	
		total=(salario+(salminimo/3)+filhos);
		inss=0.18;
		
		
		cout<<"O salario liquido de:   "<<((total*inss)+total);
	}
	
	else if (salario <=3000 || salario >=4000)
	{
		filhos=(filhos*90);
		total=(salario+(salminimo/5)+filhos);
		inss=0.22;
		
		cout<<"O salario liquido de:   "<<((total*inss)+total);
	}
	
	else
	{
		filhos=(filhos*55);
		(salario+(salminimo/6)+filhos);
		inss=0.17;
		
	
		cout<<"O salario liquido de:   "<<((total*inss)+total);
	}
	

}
