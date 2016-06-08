#include<iostream>
#include<conio.h>
#include<locale.h>
#include<math.h>

using namespace std;


	float s1,s2,s3,t,area;
	
int main()
{
	cout<<"S 1  ";
	cin>>s1;
	
	cout<<"S 2  ";
	cin>>s2;
	
	cout<<"S 3   ";
	cin>>s3;
	
	t=(s1+s2+s3)/2;
	area= sqrt(t*(t-s1)*(t-s2)*(t-s3));
	
	cout<<"O valor da area do triangulo  "<<area;

	
	
	
}
