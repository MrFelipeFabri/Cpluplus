#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

      float sm,am,aguaconsumida,residencia,desconto,acrescimo;
int main()
{
   
        cout<<"Digite o valor do salario minimo:   ";
        cin>>sm;
        
        cout<<"Digite a quantidade de agua consumida:  ";
        cin>>am;
        
       
	    aguaconsumida= sm*0.1;
        cout<<"Valor de cada mil litros de agua e:  " <<aguaconsumida<<endl;

		residencia=(aguaconsumida/1000)*am; 
		cout<<"O valor pago pela residencia e:  " <<residencia<<endl;
		
		desconto=residencia*0.05;
		cout<<"O valor pago em um desconto e:   " << desconto<<endl;
		
		acrescimo=residencia*0.10;
		cout<<"Qual o valor do acrescimo:   "<<acrescimo<<endl;
		
}
        
