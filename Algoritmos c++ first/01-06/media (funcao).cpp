#include<iostream>

using namespace std;


	float media (float n1, float n2)
	{
		float m;
		m=(n1+n2)/2;
		return (m);
	}
int main ()
{
	float nota1, nota2, md;
	
	cout<<"Nota 1   ";
	cin>>nota1;
	
	cout<<"Nota 2   ";
	cin>> nota2;
	md=media(nota1,nota2);
	
	cout<<"A media final e  " << md;
}
