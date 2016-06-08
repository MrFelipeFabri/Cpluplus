#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;


 float salariomensal, horas, salariobruto, hextra,inss;
int main()
{
    
    cout<<" Digite o salario mensal  ";
    cin>> salariomensal;
    
    cout<<" Digite as horas extras  ";
    cin>>horas;
    
    cout<<"valor da hra extra";
    cin>>hextra;
     
   salariobruto = salariomensal + horas * hextra; 
   
   
   inss=salariobruto*0.08;
   
   
   cout<<"Salario liquido" <<salariobruto-inss;
   
   getch();
   
}
