#include<iostream>

using namespace std;

int main(){
int number1, number2, number3;
cout<<"Digite o primeiro numero"<<endl;
cin>>number1;
cout<<"Digite o segundo numero"<<endl;
cin>>number2;
cout<<"Digite o terceiro numero"<<endl;
cin>>number3;

   if(number1 == number2 && number1 == number3 && number2 == number1 && number2 == number3 && number3 == number1 && number3 == number2)
   {		
	  cout<<"Todos os numeros iguais :)"<<endl;
   }
  else
  {
      if(number1 == number2 || number1 == number3 || number2 == number1 || number2 == number3 || number3 == number1 || number3 == number2 )
       {
	      cout<<"Apenas dois numeros sao iguais ;)"<<endl;  
       }
       if(number1 != number2 && number1 != number3 && number2 != number1 && number2 != number3 && number3 != number1 && number3 != number2 )
       {
	      cout<<"Todos os numeros sao diferentes :|"<<endl;
       }	 
   }
}



