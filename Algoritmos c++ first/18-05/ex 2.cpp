#include <iostream>
#include<locale.h>

using namespace std;

int main ()
{
	 int hab, ano, crescimento,x;
	 float taxa;
	 
	 cout<<"Digite quantos habitantes tem nessa cidade  ";
	 cin>>hab;
	
	cout<<"Taxa  ";
	cin>>taxa;
	
	cout<<"Anos  ";
	cin>>ano;
	
	x=1;
	
	while (x<=ano)
	{
		crescimento=hab*(taxa/100);
		hab=hab+crescimento;
		cout<<"\nAno"<<x<<"="<<hab<<endl;
		x++;
	}
}
