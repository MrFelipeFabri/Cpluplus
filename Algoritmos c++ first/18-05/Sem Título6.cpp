#include <iostream>
#include<locale.h>
#include<conio.h>

using namespace std;



int main ()
{
		float gasto,resultado=0, media;
		int mensal;
		
	
	
	mensal=1;
	
	
	while (mensal<=6)
	{
			cout<< "Digite o valor gasto " << mensal <<endl;
			cin>>gasto;
		
			resultado=resultado+gasto;
			mensal=mensal+1; //mensal++
			
			resultado=resultado+gasto;
	}
	
	cout<<"\ntotal gasto  " << resultado;
	
	media=resultado/6;
	cout<<"Media Final " << media;
}
