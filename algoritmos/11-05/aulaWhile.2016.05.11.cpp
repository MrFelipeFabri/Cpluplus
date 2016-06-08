#include <iostream>
#include <locale.h>
using namespace std;

int main(){
   setlocale(LC_ALL,"portuguese");
   
   float v, t;
   int m=0;
   
   cout<<"Digite o Valor Guardado R$";
   cin>>v;
   cout<<"Digite o Valor da Taxa em Porcentagem: ";
   cin>>t;

   while (m<12){
   v=v+v*(t/100);
   m++;      
   cout<<"Até o "<<m<<"ºMês o Total é R$"<<v<<endl;
   }
   
   cout<<"Total em 12 Meses Somando com a Taxa é R$"<<v<<endl;
   
   system("pause");
   return 0;
}
