#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

      float codigo,peso,pais,totaldoproduto,valor,imposto,valorimposto,totalapagar;
int main()
{
   
        cout<<"Digite o codigo do pais:   ";
        cin>>pais;
    
    if ( pais == 1)
    {
          cout<<"\nImposto e 0%";
          imposto = 0.0;
    }
    
    else if ( pais == 2)
    {    
         cout<<"\nImposto e de 15%  ";
         imposto =0.15;
    }
    
    else  if (pais == 3)
    {
         cout<<"\nImposto é de 25%  ";
         imposto=0.25;
    }
    
      // =======================================================================================//
      
      
     cout<<endl;
     
     cout<<"\nDigite o codigo do produto:   ";
     cin>>codigo;
     
     if ( codigo >= 1 && codigo <= 4)
     {
          cout<< "\nPagar 10,00";
          valor = 10,00;
     }
     
     else if (codigo >= 5 && codigo <= 7)
     {
          cout<<"\nPagar 20,00";
          valor= 20,00;
     }
    
     else if (codigo >= 8 && codigo <= 10)
     {
          cout <<"\nPagar 30,00";
          valor = 30,00;
     }
   
   
      // =======================================================================================//

         
        cout<<endl;
         
        cout<<"\nDigite o peso do produto:   ";
        cin>> peso;
        
       
       
        peso=peso*1000;
        cout<<"\nO peso do produto e:   " << peso;
        
        
       
        totaldoproduto= valor*peso;
        cout<<"\nO total do preço do produto e:    " <<totaldoproduto;
        
       
       
        valorimposto= totaldoproduto*imposto;
        cout<<"\nO valor do imposto e:     " << valorimposto;
       
       
        totalapagar=valorimposto+totaldoproduto;
        cout<<"\nO valor total a pagar e:    " <<totalapagar;
       
        
        getch ();
    
}   
    
    
    
    
    
    
    
    
    
    

     
        
        
       
         
    
    
    
    
    
    
