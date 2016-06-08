#include<iostream>
#include<conio.h>
#include<locale.h>
#include<math.h>

using namespace std;

		float ca,tm,nm,tj,subtotal,M;
int main()
{
	cout<<"Digite o valor do capital aplicado  ";
	cin>>ca;
	
	cout<<"Digite a taxa mensal   ";
	cin>>tm;
	
	cout<<"Digite o numero de meses  ";
	cin>> nm;
	
	tj=(tm/100)+1;
	subtotal=pow(tj,nm);
	M=ca*subtotal;	

	cout<<"O montante total da empresa é    " << M;
}
