#include <iostream>

using namespace std;

int main(){
	int numero, numero2, numero3, soma, soma2, soma3, soma4, soma5, somafinal ;
	
	cout<<"digite um numero inteiro"<<endl;
    cin>> numero, numero2, numero3;
    
    soma  =(numero %10);    
    soma2 =(numero /10);
    soma4=(soma2/10);
    soma3 =(soma2 %10);
    soma5=(numero %10);
     
    somafinal=(soma4+soma3+soma5);
	cout<<" "<<soma4;
	cout<<" + "<<soma3;
	cout<<" + "<<soma5;
	cout<<" = "<<somafinal;
	
    
}
