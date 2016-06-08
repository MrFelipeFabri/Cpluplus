#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float a,b;
    int age=0;
    
    a = 5000;
    b = 8000;
    do{
           age++;
           a*=1.05;
           b*=1.03;
           
    }while(a < b); 
    
    cout<<"cidade a tem "<<a<<" habitantes\n";
    cout<<"cidade a tem "<<b<<" habitantes\n";
    cout<<age<<" anos";
    
    getch();
    
}
