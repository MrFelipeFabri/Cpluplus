#include <iostream>
#include <locale.h>
using namespace std;

int main(){
   setlocale(LC_ALL,"portuguese");
   
   float f=0, c;
   
   while (f<=100){
   c=5.0/9.0*(f-32);      
   f=f+24;    
   }
   
   cout<<f<<"--"<<c<<endl;
   
   system("pause");
   return 0;
}
