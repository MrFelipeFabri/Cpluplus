#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float a,b;
    int age=0;


    b = 8000;
  for(a=5000;a<b;a*=1.05){
   b*=1.03;
   age++;
  }
    cout<<"cidade \"A\" tem "<<a<<" habitantes\n";
    cout<<"cidade \"B\" tem "<<b<<" habitantes\n";
    cout<<age<<" anos";
    
    getch();
    
}
