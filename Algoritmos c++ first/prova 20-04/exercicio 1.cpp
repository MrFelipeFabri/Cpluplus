#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

      float cf,imposto,lucro,valorfinal,pagou,total;
int main()
{
    cout <<"Informe o custo de fabrica   ";
    cin>> cf;
    
    
    imposto= cf*0.45;
    cout<< "\nQual o imposto   " << imposto;
    
    lucro= cf*0.10;
    cout<<"\nQual o lucro do distribuidor    " <<lucro;
    
    valorfinal = cf + imposto + lucro;
    cout<< "\nValor final    " <<valorfinal;
    
    pagou = valorfinal*0.60;
    cout<< "\nValor do 60%  " <<pagou ;
    
    total=(valorfinal - pagou) / 24;
    cout<<"\nQual o valor de cada parcela    " << total;
    
    
    getch ();
    
    
}
