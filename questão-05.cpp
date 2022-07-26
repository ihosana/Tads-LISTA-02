#include<iostream>
using namespace std;

int main(){
    float novo_salario, salario, aumento, diferenca_salarial;
	int codigo;
	/*----------------TABELA-----------------*/
	cout<<"CODIGO |   CARGO  | PERCENTUAL"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<" 101   |  Gerente |    10%   "<<endl;
	cout<<" 102   |Engenheiro|    20%   "<<endl;
	cout<<" 103   |  Tecnico |    30%   "<<endl;
	
	cout<<"\n Digite o codigo correspondente a sua profissao "<<endl;
    cin>>codigo;
    cout<<"\n Digite o salario do seu trabalho "<<endl;
    cin>>salario;
    
    /*---------------COMANDO LÓGICO-------------->*/
   	 switch(codigo){
    	 case 101:/*PRIMEIRO CASO*/
             aumento=( (salario * 10 )/100);
   	         novo_salario=(aumento + salario);
             diferenca_salarial=( novo_salario - salario);
            
             cout<<" Salario antigo: R$"<<salario;
             cout<<""<<endl;
             cout<<" novo salario : R$"<<novo_salario;
             cout<<""<<endl;
             cout<<" Diferenca salarial: R$"<<diferenca_salarial;
             cout<<""<<endl; 			  	
		   break;
             case 102:/*SEGUNDO CASO*/
             aumento=( (salario * 20 )/100);
            novo_salario=(aumento + salario);
			 diferenca_salarial=( novo_salario - salario);
            
             cout<<" Salario antigo: R$"<<salario;
             cout<<""<<endl;
             cout<<" novo salario : R$"<<novo_salario;
             cout<<""<<endl;
             cout<<" Diferenca salarial: R$"<<diferenca_salarial;
             cout<<""<<endl; 			  	
		   break;
            case 103:/*QUARTO CASO*/
             aumento=( (salario * 30 )/100);
             novo_salario=(aumento + salario);
			 diferenca_salarial=( novo_salario - salario);
            
             cout<<" Salario antigo: R$"<<salario;
             cout<<""<<endl;
             cout<<" novo salario : R$"<<novo_salario;
             cout<<""<<endl;
             cout<<" Diferenca salarial: R$"<<diferenca_salarial;
             cout<<""<<endl; 			  	
		   break;
		   /*'''''''''''''''''CASO NENHUM DOS CASES EXECUTEM''''''''''''''''*/
		   default:
		   	 aumento=( (salario * 40 )/100);
        	 novo_salario=(aumento + salario);
             diferenca_salarial=( novo_salario - salario);
 
   	         cout<<"\n Cargo novo com um salario atual de: R$"<<novo_salario;
   	         cout<<""<<endl;
        	 cout<<"\n Salario antigo: R$"<<salario;
             cout<<""<<endl;
             cout<<"\n Diferenca salarial: R$"<<diferenca_salarial;
             cout<<""<<endl; 
	   }
   	

return 0;
}
