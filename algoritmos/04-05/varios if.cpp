#include<iostream>

using namespace std;

     	float setor,salario,desc,tempo;
int main()
{
	
	char resp;
	
	do
	{
		
	cout<<"\nInforme o salario    ";
	cin>>salario;
	
	cout<<"Informe o setor  ";
	cin>>setor;
	
	
	if (salario <=850)
	{
		
				if (tempo <=3)
				{
					if (setor ==1)
					{
						desc=salario*0.05;
						cout<<"Total do desconto e:   "<<desc << endl;
						cout<<"============= Ate 3 anos, Setor 1 =============   " <<endl ;
						
					}
					
					if (setor==2)
					{
						desc=salario*0.06;
						 cout<<"Total do desconto e:   "<<desc << endl;
						 cout<<"============= Ate 3 anos, Setor 2 =============   " <<endl;
						
					}	
				}
				
				if (tempo >=3 )
				{
					if (setor ==1)
					{
						desc=salario*0.055;
						cout<<"Total do desconto e:   "<<desc << endl;
						cout<<"============= Ate 3 anos, Setor 1 =============   " <<endl;
					}
					
					if (setor==2)
					{
						desc=salario*0.065;
						cout<<"Total do desconto e:   "<<desc << endl;
						cout<<"=============Mais de 3 anos, Setor 2 =============   "<<endl;
						
					}			
					
				}
	}
				
	else if (salario > 850)
	{
			if(tempo<=3)
			{
				if (setor==1)
				{
					desc=salario*0.07;
					cout<<"Total do desconto e:   "<<desc << endl;
					cout<<"============= Ate 3 anos, Setor 1 =============     "<<endl;
				}
				
				if(setor==2)
				{
					desc=salario*0.08;
					cout<<"Total do desconto e:   "<<desc << endl;
					cout<<"============= Mais que 3 anos, Setor 2 =============    "<<endl;
				}
			}
			
			
			if(tempo > 3 )
			{
				if (setor ==1)
				{
					desc=salario*0.075;
					cout<<"Total do desconto e:   "<<desc << endl;
					cout<<"============= Ate 3 anos, Setor 1 =============   " <<endl;
				}
				
				if (setor==2)
				{
					desc=salario*0.085;
					cout<<"Total do desconto e:   "<<desc << endl;
					cout<<"============= Mais que 3 anos, Setor 2 =============  "<<endl;
				}
			}
	}
	
	  	cout << "\nDeseja continuar (s/n) ?";
    	cin >> resp;
    } 
	 	while (resp=='s' || resp=='S');
		
		
		
	
}
	
	

