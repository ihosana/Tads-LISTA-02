#include<iostream>
using namespace std;

int main(){
	float ano, valor_carro, resolucion, taxa;
	cout<<"Digite o ano de fabricacao do carro"<<endl;
	cin>>ano;
	cout<<"Digite o valor do carro "<<endl;
	cin>>valor_carro;
	
	if(ano <= 1990){
		taxa=(( valor_carro * 1)/100);
	    resolucion=(valor_carro + taxa);
	   cout<<"Valor a ser pago:"<<resolucion;
	}
	else{
			taxa=(( valor_carro * 1.5)/100);
	    resolucion=(valor_carro + taxa);
	   cout<<"Valor a ser pago:"<<resolucion;
	}
	

return 0;
}
/*
	
	if(ano <= 1990){
		resolucion=( valor_carro + 0.01);
	   cout<<"Valor a ser pago:"<<resolucion;
	}
	else{
		resolucion=( valor_carro + 0.015);
	   cout<<"Valor a ser pago:"<<resolucion;
	}
	
*/
