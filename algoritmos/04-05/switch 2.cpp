#include<iostream>

using namespace std;

     	float produto, desc,conta,desconto;
int main()
{
	int departamento,etiqueta;
	
	cout<<"Digite o preço do produto:   ";
	cin>>produto;
	
	cout<<"Digite o departamento:  ";
	cin>>departamento;
	
	cout<<"Digite a etiqueta:   ";
	cin>>etiqueta;
	
	switch(departamento)
	{
		case 1: switch (etiqueta)
				{
					case 1  : desc=0.06; break;
					case 2  : desc=0.07; break;
					case 3  :desc=0.08; break;
					case 4  : desc=0.09; break;
				}
				
				break;
		case 2: switch (etiqueta) 
				{
					case 1 : desc= 0.063; break;
					case 2 : desc=0.074; break;
					case 3 :desc=0.082; break;
					case 4 : desc=0.091; break;
				}
				break;
		
		case 3: switch (etiqueta)
				{
					case 1  : desc=0.056; break;
					case 2 : desc=0.067; break;
					case 3 :desc=0.078; break;
					case 4 : desc=0.109; break;
				}
				break;
	}
	
		desconto=produto*desc;
		cout<<"Valor do desconto   "<<desconto<<endl;
		conta =produto-(produto*desc);
		cout<<"\nO valor final do produto  " <<conta;
		
	
	
}
