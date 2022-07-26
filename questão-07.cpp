#include<iostream>

using namespace std;

int main(){
    int codigo2, codigo1,codigo3, codigo4, codigo5, codigo6, codigo7, codigo8, quant8,quant, quant0, quant1, quant2, quant3, quant4, quant5, quant6, quant7;
    float val, val0, val1, val2, val3, val4, val5, val6, val7, resultado, fim ,resultado0, resultado1, resultado2, resultado3, resultado4;
    
 

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
   
  cout<<"\n Digite o codigo do primeiro item que voce deseja adquirir"<<endl;   
  cin>>codigo1;
  cin>>codigo2;
  cin>>codigo3;
  cin>>codigo4; 
  cin>>codigo5;
  cin>>codigo6;
  cin>>codigo7;
  cin>>codigo8;
  cout<<"\n Digite a quantidade"<<endl;
  cin>> quant1;
  cin>> quant2;
  cin>> quant3;
  cin>> quant4;
  cin>> quant5;
  cin>> quant6; 
  cin>> quant7;
  cin>> quant8;

/*-----------------------------------------EM RELÇÃO AO CÓDIGO DO ITEM---------------------------*/
 /*PARA O PRIMEIRO ITEM*/
 switch(codigo1){
 	 
  	  case 100:
  	     val0=(quant0 * 1.10);
  	       resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val1=(quant1 * 1.30);
  	 	 resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	 resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
  	 	 resultado4=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado4;  
  	 break;
	   default:
       cout<<"ATENDIMENTO NEGADO!"<<endl;
  }  
    /*PARA O SEGUNDO ITEM*/ 
 switch(codigo2){
 	 case 0:
 	  	val=(quant * 0);
         cout<<"valor a ser pago: R$"<<val;
 	  	break;
  	 case 100:
  	     val0=(quant0 * 1.10);
  	     resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
         resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
		 cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	   resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
         cout<<"valor a ser pago: R$"<<val4;  
  	 break;
  	    resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
  	    cout<<"valor a ser pago: R$"<<resultado;  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
   /*PARA O TERCEIRO ITEM*/ 
  switch(codigo3){
 	 case 0:
 	  	val=(quant * 0);
         cout<<"valor a ser pago: R$"<<val;
 	  	break;
  	 case 100:
  	     val0=(quant0 * 1.10);
  	     resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
         resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
		 cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	   resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
         cout<<"valor a ser pago: R$"<<val4;  
  	 break;
  	    resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
  	    cout<<"valor a ser pago: R$"<<resultado;  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
  
    /*PARA O QUARTO ITEM*/ 
  switch(codigo4){
 	 case 0:
 	  	val=(quant * 0);
         cout<<"valor a ser pago: R$"<<val;
 	  	break;
  	 case 100:
  	     val0=(quant0 * 1.10);
  	     resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
         resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
		 cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	   resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
         cout<<"valor a ser pago: R$"<<val4;  
  	 break;
  	    resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
  	    cout<<"valor a ser pago: R$"<<resultado;  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
    /*PARA O QUINTO ITEM*/ 
  switch(codigo5){
 	 case 0:
 	  	val=(quant * 0);
         cout<<"valor a ser pago: R$"<<val;
 	  	break;
  	 case 100:
  	     val0=(quant0 * 1.10);
  	     resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
         resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
		 cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	   resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
         cout<<"valor a ser pago: R$"<<val4;  
  	 break;
  	    resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
  	    cout<<"valor a ser pago: R$"<<resultado;  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
    /*PARA O SEXTO ITEM*/ 
  switch(codigo6){
 	 case 0:
 	  	val=(quant * 0);
         cout<<"valor a ser pago: R$"<<val;
 	  	break;
  	 case 100:
  	     val0=(quant0 * 1.10);
  	     resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
         resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
		 cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	   resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
         cout<<"valor a ser pago: R$"<<val4;  
  	 break;
  	    resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
  	    cout<<"valor a ser pago: R$"<<resultado;  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
    /*PARA O SÉTIMO ITEM*/ 
  switch(codigo7){
 	 case 0:
 	  	val=(quant * 0);
         cout<<"valor a ser pago: R$"<<val;
 	  	break;
  	 case 100:
  	     val0=(quant0 * 1.10);
  	     resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
         resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
		 cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	   resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
         cout<<"valor a ser pago: R$"<<val4;  
  	 break;
  	    resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
  	    cout<<"valor a ser pago: R$"<<resultado;  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
    /*-------PARA O OITAVO ITEM*/ 
  switch(codigo8){
 	 case 0:
 	  	val=(quant * 0);
         cout<<"valor a ser pago: R$"<<val;
 	  	break;
  	 case 100:
  	     val0=(quant0 * 1.10);
  	     resultado0=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado0;  
  	  break;
  	  case 101:
  	 	 val0=(quant1 * 1.30);
         resultado1=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
		 cout<<"valor a ser pago: R$"<<resultado1;  
  	  break;
  	  case 102:
  	 	 val2=(quant2 * 1.50);
  	 	   resultado2=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	 resultado3=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
         cout<<"valor a ser pago: R$"<<val4;  
  	 break;
  	    resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
  	    cout<<"valor a ser pago: R$"<<resultado;  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
  
  /*---------------------------------------EM RELAÇÃO A QUANTIDADE-------------------------*/
  /*PARA A SEGUNDA QUANTIDADE
 switch(quant2){
  	 case 0:
  	 
  	 break;
     case 1:
  	 
	 break;
	default:
    
  }  
  */
return 0;
}


   cout<<"\n Digite o codigo do primeiro item que voce deseja adquirir"<<endl;   
  cin>>codigo1;
  cout<<"\n Digite a quantidade"<<endl;
  cin>> quant1;
  cout<<"\n Digite o codigo do segundo item que voce deseja adquirir"<<endl;   
  cin>>codigo2;
  cout<<"\n Digite a quantidade"<<endl;
  cin>> quant2;
 switch(codigo0){
  	 case 100:
  	 	 val0=(quant0 * 1.10);
           cout<<"valor a ser pago: R$"<<val0;  
  	 break;
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  }  
    
 switch(codigo1){
  	 case 101:
  	 	 val0=(quant0 * 1.10);
           cout<<"valor a ser pago: R$"<<val0;  
  	 break;
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  } 
 ;......................
 switch(codigo){
  	 case 100:
  	 	 val0=(quant0 * 1.10);
           cout<<"valor a ser pago: R$"<<val0;  
  	 break;
     case 101:
  	 	 val1=(quant1 * 1.30);
  	     resultado1=(val0 + val1);
          cout<<"valor a ser pago: R$"<<resultado1;  
	 break;
  	 case 102:
  	 	 val2=(quant2 * 1.50);
  	     resultado2=(val2 + resultado1);
         cout<<"valor a ser pago: R$"<<resultado2;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	  resultado3=( resultado2 +val3);
         cout<<"valor a ser pago: R$"<<resultado3;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
  	 	  resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
  	 case 105:
  	 	 val5=(quant5 * 1.00);
  	 	  resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
  	 case 106:
  	 	 val6=(quant6 * 2.00);
  	 	  resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
  	 case 107:
  	 	 val7=(quant7 * 1.50);
  	 break;
  	  
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  }  
...........................


cout<<"\n Digite o codigo dos itens que voce deseja adquirir"<<endl;   
  cin>> codigo;
  cout<<"\n Digite o quantidade dos itens"<<endl;   
  cin>> quant0, quant1, quant2, quant3, quant4, quant5, quant6, quant7;
  
  switch(codigo){
  	 case 100:
  	 	 val0=(quant0 * 1.10);
  	     resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
     case 101:
  	 	 val1=(quant1 * 1.30);
  	     resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
	 break;
  	 case 102:
  	 	 val2=(quant2 * 1.50);
  	     resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;   
	 break;
     case 103:
  	 	 val3=(quant3 * 1.10);
  	 	  resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
     case 104:
  	 	 val4=(quant4 * 1.30);
  	 	  resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
  	 case 105:
  	 	 val5=(quant5 * 1.00);
  	 	  resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
  	 case 106:
  	 	 val6=(quant6 * 2.00);
  	 	  resultado=(val0 + val1 + val2 + val3 + val4 + val5 + val6 + val7);
         cout<<"valor a ser pago: R$"<<resultado;  
  	 break;
  	 case 107:
  	 	 val7=(quant7 * 1.50);
  	 break;
  	 
	default:
    	cout<<"ATENDIMENTO NEGADO!"<<endl;
  }  
  
    */
