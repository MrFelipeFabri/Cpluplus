#include<iostream>
#include<locale.h>

using namespace std;

int main ()
{

	float peso,altura,imc;
	int pessoa=0, contador=0, c1=0,c2=0,c3=0;
	 


	while( pessoa < 10 )
	{
		cout<<endl;	
		
		cout<<"\nDigite a altura da pessoa   ";
		cin>>altura;
		cout<<"Digite o peso da pessoa  ";
		cin>> peso;
	
		
		imc = peso/(altura*altura);
	
		
		if (imc < 22)
		{
			cout<<endl;
				
			cout<<"\tIMC Baixo";
			c1++;
			contador++;
			
		
		}
		
		else if (imc > 22 && imc < 27)
		{
			cout<<endl;
			cout<<"\tIMC ideal";
			c2++;
			contador++;
		
		}
		
		else 
		{
			cout<<endl;
			cout<<"\tIMC alto";
		
			c3++;
			contador++;
			
		}
		pessoa++;	
		
		
		
	}

		cout<<"\nQuantas pessoas estao com o IMC baixo  " << c1;
		cout<<"\nQuantas pessoas estao com o IMC ideal  " << c2;
		cout<<"\nQuantas pessoas estao com o IMC alto  " << c3;
		cout<<endl;




}
