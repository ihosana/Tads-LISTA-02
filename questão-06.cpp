#include<iostream>

using namespace std;

int main(){
	float salario, horas;
	int tipo_professor;
	cout<<"_______________TABELA______________"<<endl;
	cout<<"Professor Nivel 1 | R$ 12,00 h/aula"<<endl;
	cout<<"___________________________________"<<endl;
	cout<<"Professor Nivel 2 | R$ 17,00 h/aula"<<endl;
	cout<<"___________________________________"<<endl;
	cout<<"Professor Nivel 3 | R$ 25,00 h/aula"<<endl;
   
	cout<<"\n Que tipo de professor vc e?"<<endl;
	cin>>tipo_professor;
	cout<<"\n Quantas horas vc trabalha por hora?"<<endl;
	cin>>horas;
	
	switch(tipo_professor){
	   case 1:
	   	salario=(horas * 12.00);
	   	cout<<"Seu salario corresponde a: R$"<<salario;
	   break;
	   case 2:
	   	salario=(horas * 17.00);
	   	cout<<"Seu salario corresponde a: R$"<<salario;
	   break;
	   case 3:
	   	salario=(horas * 25.00);
	   	cout<<"\n Seu salario corresponde a: R$"<<salario;
	   break;
	  default:
	  	cout<<"PROFESSOR NAO IDENTIFICADO!!!!!"<<endl;
	}
	
	
 return 0;	
}
