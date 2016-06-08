#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;
	
	float mf; 
	
int main()
{
	cout<<"Digite a media final    ";
	cin>> mf;
	
	
	if (mf >= 9)
	{
	cout<<"Excelente";
	}
	
	else if (mf >= 7.5)
	{
		cout<<"Bom";
	}
	
	else if (mf >=5 )
	{
		cout<<"Regular";
	}
	
	else if (mf >= 2.5)
	{
		cout<<"Ruim";
	}
	
	else 
	{
		cout<<"Pessimo";
	}
}
