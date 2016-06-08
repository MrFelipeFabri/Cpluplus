#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

		float maior, menor, altura, area;
int main ()
{
	
	
	cout<< "Digite a area maior" << endl;
	cin>> maior;
	
	cout<<"Digite a area menor" << endl;
	cin>>menor;
	
	cout<<"Digite a altura" << endl;
	cin>>altura;
	
	area=(maior+menor) * altura/2;
	
	cout << " Qual a area do trapezio" << endl << area;
	
	
}
