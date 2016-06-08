#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;
	
	float rf,nf,bf=200; 
	
int main()
{
	
	cout<<"Digite a renda da familia   ";
	cin>>rf;
	cout<<"Digite o numero de filhos  ";
	cin>>nf;

	if (rf <=450)
	{
		cout<<"15% da renda para cada filho   ";
		bf=(rf*0.15)*nf;
		
		
	}
	
	else if (450<=600)
	{
		cout<<"10% da renda para cada filho   " ;
		bf=(rf*0.10)*nf;
			
	
	}
	else if (600>=900)
	{
		cout<<"5% da renda para cada filho   " ;
		bf=(rf*0.05)*nf;
			
	}
	else if (900>=1000)
	{
		cout<<"2% da renda para cada filho   ";
		bf=(rf*0.02)*nf;
			
	
	}
	else
	{
		cout<<"Não possui";
	
	}
	

}
