#include<iostream>
using namespace std;

int main(){ 

	float distancia, litros, consumo ;        
	 cout<<"quantos Km vc pecorre?"<<endl;
     cin >> distancia ;
      cout<<"quantos Litros vc gasta pelo Km percorrido?"<<endl;
     cin >> litros;
   
   consumo=(distancia / litros);
   if(consumo < 8)
   {
     cout<<"Um consumo de "<< consumo;  
     cout<<" km/L VENDA O CARRO!!! "<< endl;
   }
   else{
   	 if(consumo >= 8 && consumo <= 12)
	   {	
          cout<<"Um consumo de "<< consumo;
          cout<<" km/L economico!!!"<< endl; 
	   }
	   if(consumo > 12)
	   {
          cout<<"Consumo de "<< consumo; 
          cout<<" km/L SUPER ECONOMICO "<< endl; 
	   }
   }
return 0;
}                 
  
