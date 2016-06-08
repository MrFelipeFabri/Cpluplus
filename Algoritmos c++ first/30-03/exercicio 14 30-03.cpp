#include <iostream> // para poder utilizar os comandos de entrada e saida de dados//
#include <conio.h> 
#include <locale.h>

using namespace std;  // espaço de memoria p meu programa utilizar

int main()
{
	
	float p1, p2, p3, p4, t1, t2, mp, mt;
	
	
	cout<<"Digite a nota da primeira prova" <<endl;
	cin>>p1;
	
	cout<<"Digite a nota da segunda prova" <<endl;
	cin>>p2;
	
	cout<<"Digite a nota da terceira prova" <<endl;
	cin>>p3;
	
	cout<<"Digite a nota da quarta prova" <<endl;
	cin>>p4;
	
	
	cout<<"Digite a nota do primeiro trabalho" <<endl;
	cin>>t1;
	
	cout<<"Digite a nota do segundo trabalho" <<endl;
	cin>>t2;
	
	mp = ((p1+p2+p3+p4)/4) * (65.0/100);
	mt = ((t1+t2 )/2) *(35.0/100);

	
	
	cout<<"\tMedia prova    "<<mp <<endl;
	cout<<"\tMedia trabalho    " << mt <<endl;
	cout<<"\ttotal    " <<mp+mt <<endl;
	
	
}
