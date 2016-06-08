#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

      float aguaresid, valor1000, valorresid,valordesc, valorbv, sminimo=880;
int main()
{
	cout<<"Consumo de agua na residencia";
	cin>>aguaresid;
	
	valor1000=sminimo/10;
	
	cout<<"Valor de cada 1000 litros de agua  " <<valor1000<<endl;
	
	valorresid=(aguaresid/1000)*valor1000;
	cout<<"valor pago pela residencia" <<valorresid<<endl;
	
	valordesc=valorresid -(valorresid*0.05);
	cout<<"Valor com desconto e:    "<<valordesc<<endl;
	
	valorbv=valorresid+(valorresid*0.10);
	cout<<"valor banda vermelha   "<<valorbv<<endl;
}
