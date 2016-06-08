#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;


      float sal,porcentagem, aumento, novosal;
int main()
{
    
     cout<< " Digite o salario atual  "  ;
     cin>> sal;
     
     cout<< "\nDigite a porcentagem de aumento";
     cin>>porcentagem;
     
     
     aumento = sal*(porcentagem/100);
     
     cout<<"\nValor de aumento"<<aumento <<endl;
       
       novosal = sal + aumento;
       
       cout<<"\nNovo salario"<< novosal << endl;
       
       getch();
     
     
      
     
}
