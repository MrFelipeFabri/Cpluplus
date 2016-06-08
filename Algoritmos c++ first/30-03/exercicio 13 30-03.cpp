#include <iostream> // para poder utilizar os comandos de entrada e saida de dados//
#include <conio.h> 
#include <locale.h>

using namespace std;  // espaço de memoria p meu programa utilizar

int main()
{
	int primeiroano, segundoano, total, calculo;
	
	cout<<"Digite o primeiro ano:  "<<endl;
	cin>>primeiroano;
	
	
	cout<<"Digite o segundo ano:   " <<endl;
	cin>>segundoano;
	
	total=segundoano - primeiroano;
	calculo= total*365;
	
	cout<<"A quantidade de anos vividos"<<endl <<calculo;
	

}
