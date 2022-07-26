#include<iostream>

using namespace std;

int main(){
	int numero1, numero2, numero3;
	char ordem;
    
    cout<<"Digite o primeiro numero"<<endl;
    cin>>numero1;
    cout<<"Digite o segundo numero"<<endl;
    cin>>numero2;
    cout<<"Digite o terceiro numero"<<endl;
    cin>>numero3;
    cout<<"Digite a ordem dos numero C(crescente) D(decrescente)"<<endl;
    cin>>ordem;
    if(ordem == 'c')
	{
    	if( numero1 < numero2 && numero2 < numero3 || numero2 > numero1 && numero3 > numero2){
    	    cout<<" "<< numero1;
    		cout<<" < "<< numero2;
    		cout<<" < "<< numero3;
		}
	   else{
			if(numero1 > numero2 && numero2 > numero3 || numero2 < numero1 && numero3 < numero2  )
			{
				cout<<" "<< numero3;
    		    cout<<" < "<< numero2;
    		    cout<<" < "<< numero1;
			}
		  else{
			  if(numero2 > numero3 && numero3 > numero1 || numero3 < numero2 && numero1 < numero3  )
			  {
			     cout<<"  "<< numero1;
    		     cout<<" < "<< numero3;
    		     cout<<" < "<< numero2;
		      }
			 else{	
			      if(numero3 > numero1 && numero1 > numero2 || numero1 < numero3 && numero2 < numero1  )
				  {
				     cout<<" "<< numero2;
    		         cout<<" < "<< numero1;
    		         cout<<" < "<< numero3;
				 }
				 else{
				 	
				      if(numero2 > numero1 && numero1 > numero3 || numero1 < numero2 && numero3 < numero1  )
				      {
				         cout<<" "<< numero3;
    		             cout<<" < "<< numero1;
    		             cout<<" < "<< numero2;
				       }
				     else{
				  	     cout<<" roubo"<< endl;
				       }
				   }
			   }
			}
		}
	}
   else
   {
	   if(ordem == 'd')
	   {
	     if( numero1 < numero2 && numero2 < numero3 || numero2 > numero1 && numero3 > numero2)
		 {
    	     cout<<" "<< numero3;
    	     cout<<" > "<< numero2;
    		 cout<<" > "<< numero1;
		   }
	     else{
		    	if(numero1 > numero2 && numero2 > numero3 || numero2 < numero1 && numero3 < numero2  )
			   {
				 cout<<" "<< numero1;
    		     cout<<" > "<< numero2;
    		     cout<<" > "<< numero3;
		    	}
		      else{
			      if(numero2 > numero3 && numero3 > numero1 || numero3 < numero2 && numero1 < numero3  )
			      {
			         cout<<" "<< numero2;
    		         cout<<" > "<< numero3;
    		         cout<<" > "<< numero1;
		           }
			     else{	
			            if(numero3 > numero1 && numero1 > numero2 || numero1 < numero3 && numero2 < numero1  )
				        {
				          cout<<" "<< numero3;
    		              cout<<" > "<< numero1;
    		              cout<<" > "<< numero2;
				       }
				       else{
				         if(numero2 > numero1 && numero1 > numero3 || numero1 < numero2 && numero3 < numero1  )
				           {
				             cout<<" "<< numero2;
    		                 cout<<" > "<< numero1;
    		                 cout<<" > "<< numero3;
				           }
				          else{
				  	         cout<<" ROUBO "<< endl;
    		               
				           }
				       }
			       }
			   }
		   }     
    	}
   }
}
