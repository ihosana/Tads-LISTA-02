#include<iostream>

using namespace std;

int main(){
	char letra ;
	int sub, soma, number;
	
	
    cout<<"Digite um numero"<<endl;	
    cin>>number;
   
    cout<<"Digite uma letra S de sucessor, A de antecessor"<<endl;	
    cin>>letra;

  if(letra == 'a'){	
       for (number = number  ; number >= 10; number = number-10)
          
          
        {
              cout<<" \n Contador:"<<number;
        }	
	}
  else{
	  if(letra == 's'){
	
          
            for (number != 0; number <= 10; number = number+1)
            {
                cout<<" \n Contador:"<<number;
            }
        }
        else{
        	
	   printf("inexistente");
		}

}
}

/*
if(letra == 'a'){	
      for ( number < 10; number = number-1;)
        {
          printf("Contador : %d\n",number);
        }
          sub=(number + number);
            printf("Valor do Contador após o laco: %d\n",sub);
        } 
  else{
	  if(letra == 's'){
	
          
            for (number != 0; number <= 10; number = number+1)
            {
              printf("Contador : %d\n",number);
            }
            printf("Valor do Contador após o laco: %d\n",number );
        }
        else{
        	
	   printf("inexistente");
		}




for (letra = 0; letra < 10; letra = letra+1)
{
  printf("Contador : %d\n",letra);
}

printf("Valor do Contador após o laoo: %d\n",letra);
}*/
