#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int i, x; 
  	int div = 0;
  
 	cout<<"Digite um n�mero inteiro e positivo: ";
	cin>>x;
  
  for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    cout<<"O n�mero "<<x<<" � primo!";
  else
    cout<<"O n�mero "<<x<<" N�O � primo!";

  getch();
}
	

