#include <iostream> // para poder utilizar os comandos de entrada e saida de dados//
#include <conio.h> 
#include <locale.h>

using namespace std;  // espaço de memoria p meu programa utilizar

int main()
{
	int anos, dias;
	
	
	cout<< "Quantos anos voce tem?   " <<endl;  
	cin>> anos;
	
	dias=anos*365;
	
	cout<<"O total de dias vividos sao  :" <<endl <<dias;
}
