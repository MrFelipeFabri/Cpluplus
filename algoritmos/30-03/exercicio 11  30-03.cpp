#include <iostream> // para poder utilizar os comandos de entrada e saida de dados//
#include <conio.h> 
#include <locale.h>

using namespace std;  // espaço de memoria p meu programa utilizar

int main()
{
	float pedreiro, pintor, valortotal;
	
	
	cout<<"Num de horas trabalhadas pelo pedreiro" <<endl;
	cin>>pedreiro;
	
	cout<<"Num de horas trabalhadas pelo pintor" <<endl;
	cin>>pintor;
	
	//calculando o valor total
	
	valortotal= pedreiro*10 + pintor*8;
	
	
	cout<<"o valor total gasto na reforma:  " <<endl <<valortotal;
	
	
	getch();
	
}
	
	
	
	
	
	
	
	

