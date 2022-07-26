#include<iostream>

using namespace std;

int main(){

float media, trabalho_labor, AV_semestral, exame_final;

cout<<"Digite a nota do trabalho laboratorio"<<endl;
cin>>trabalho_labor;

cout<<"Digite a nota da Avaliacao semestral"<<endl;
cin>>AV_semestral;

cout<<"Digite a nota do exame final"<<endl;
cin>>exame_final;

/*--------------------OPERAÇÃO LÓGOCA-----------------*/
if( trabalho_labor <= 10 && trabalho_labor >= 0 )
   {
	  if(AV_semestral <= 10 && AV_semestral >= 0 )
	   {
	        if(exame_final <= 10 && exame_final >= 0)
			{
	    	  media =((trabalho_labor + AV_semestral + exame_final )/3);
	          cout<<"media do aluno e "<<media;
	          
	           if(media <= 2.9 )
			   {
	              cout<<" e esta REPROVADO"<<endl;
	           	}
	           else{
		         if(media >= 3 && media <= 4.9)
				   {
		             cout<<" e esta RECUPERACAO"<<endl;
				   }
				 else{
				 	 cout<<" e esta APROVADO"<<endl;
				   }
		        }
	       }
	       else{
	  	     cout<<"nota invalida";
	       }		
	   }
       else{
		  cout<<"nota invalida";
       }
   }
   else{
		cout<<"nota invalida";
   }

}
