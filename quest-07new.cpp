#include<iostream>
using namespace std;

int main(){
    int  codigo, codigo2, quant1, quant2, valor_nulo;
    float val0, val4, resultado;
    
   /*-TABELAS----------------------------------------------------------->*/
   cout<<"\nSANDUICHE"<<endl;
   cout<<"CODIGO | DESCRICION | R$ POR UNIDADE"<<endl;
   cout<<" 100   |CACHORRO Q. |    1,10"<<endl;
   cout<<" 101   |BAURU SIMP. |    1,30"<<endl;
   cout<<" 102   |BAURU COM O.|    1,50"<<endl;
   cout<<" 103   |HAMBURGUER  |    1,10"<<endl;
   cout<<" 104   |CHEESBURGER |    1,30"<<endl;
   
   cout<<"\n BEBIDAS"<<endl;
   cout<<"CODIGO | DESCRICION | R$ POR UNIDADE"<<endl;
   cout<<" 105   |REFRIGERANTE|    1,00"<<endl;
   cout<<" 106   |SUCO        |    2,00"<<endl;
   cout<<" 107   |NESCAU      |    1,50"<<endl;
   
   /*-FIM DA TABELA E COMEÇO DAS PERGUNTAS-----------------------------------*/ 
    cout<<"\n Digite o codigo do sanduiche que voce deseja adquirir"<<endl;   
    cin>>codigo;
    cout<<"\n Digite a quantidade"<<endl;
    cin>> quant1;
    cout<<"\n Digite o codigo da bebida que voce deseja adquirir"<<endl;   
    cin>>codigo2;
    cout<<"\n Digite a quantidade"<<endl;
    cin>> quant2;
    /*OPERAÇÃO EM RELAÇÃO AO CODIGO DO PRIMEIRO ITEM ---------------------->*/
    switch(codigo){
       case 0:
  	     valor_nulo=(quant1 * 0);
  	  break;
  	  case 100:
  	     val0=(quant1 * 1.10);
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
  	  break;
  	  case 102:
  	 	 val0=(quant1 * 1.50);
	  break;
      case 103:
  	 	 val0=(quant1 * 1.10);
  	  break;
      case 104:
  	 	 val4=(quant1 * 1.30);
  	  break;
	 default:
     cout<<"ATENDIMENTO NEGADO PARA O SANDUICHE!"<<endl;
   }  
    /*OPERAÇÃO EM RELAÇÃO AO CODIGO DO SEGUNDO ITEM ----------------------->*/
  switch(codigo2)
  {
  	  case 0:
  	     resultado=(val0 +  val4);
  	     cout<<"valor a ser pago: R$"<<resultado;  
  	  break;
  	  case 105:
  	 	 val4=(quant2 * 1.00);
  	 	 resultado=(val0 + val4);
         cout<<"valor a ser pago: R$"<<resultado;  
  	  break;
  	  case 106:
  	 	 val4=(quant2 * 2.00);
  	 	 resultado=(val0 + val4);
         cout<<"valor a ser pago: R$"<<resultado;  
  	  break;
  	  case 107:
  	 	 val4=(quant2 * 1.50);
  	 	 resultado=(val0 + val4);
         cout<<"valor a ser pago: R$"<<resultado;  
  	  break;
  	  default:/* CASO NÃO SEJA NENHUM DOS CASOS ACIMA-------------------------> */
       cout<<"ATENDIMENTO NEGADO PARA A BEBIDA!"<<endl;
   }
 return 0; 
}
