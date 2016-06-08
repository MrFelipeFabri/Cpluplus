#include <iostream> // para poder utilizar os comandos de entrada e saida de dados//
#include <conio.h> 
#include <locale.h>

using namespace std;  // espaço de memoria p meu programa utilizar


 	float sal, aumento;
 	
 	
int main () 
{ //inicio
   
    setlocale(LC_ALL,"Portuguese");
    
    cout<<"Digite o salario" << endl;
    cin>>sal;
    
    aumento = sal + sal*0.25;
    
    cout<< "Qual o novo salario" << aumento << endl;
    
     system ("pause"); //tela parar 

}// fim



 // float = numero real
 // int= inteiro
 //char = caracter 
