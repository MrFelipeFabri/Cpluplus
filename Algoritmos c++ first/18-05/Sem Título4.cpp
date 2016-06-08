#include <iostream>
#include<locale.h>

using namespace std;

int main ()
{
	float x,y,soma=0,k;
	
	x=1; //parte superior
	y=1; //parte inferior
	
	while (y<=50)  // ou x<=99
	{
		k=(x/y);
		soma=soma+k;
		x=x+2;
		y++;
		cout<<"\nsoma=   "<<soma<<endl;
	}	
	
}
