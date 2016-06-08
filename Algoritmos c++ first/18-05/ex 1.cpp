#include <iostream>
#include<locale.h>

using namespace std;

int main ()
{
	 int hab=10000, ano=1, crescimento;
	

	
	while (ano<=20)
	{
		crescimento=hab*0.02;
		hab=hab+crescimento;
		cout<<"\nAno"<<ano<<"="<<hab<<endl;
		ano++;
	}
}
