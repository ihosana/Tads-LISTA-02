#include<iostream>

using namespace std;

int main(){
int i; //mes
int j; //dia
int cont = 0; //quebra linha
int ano, mes, dia, bis;
int g, c, x, z, e, d, n;


    /*CALENDÁRIO*/
    
   
    printf("|-----------------------------|\n");
    printf("| dom seg ter qua qui sex sab |\n");
    printf("|");
    printf("  ");
    
   
    
    /*escrever meses do dia*/
    for(j = 1; j <= 31 ; j++){
        
        if(j <= 9){
            
            if(cont >= 6){
                printf(" %d |\n|  ", j);
                cont = 0;
            }else{
                printf(" %d  ", j);
                cont++;
            }

        }else{
            if(j == 10){
                printf("%d", j);
                cont++;
            }else{
                printf("  %d", j);
                cont++;
            }           
            
            if(cont > 6){
                printf(" |\n|");
                cont = 0;
            }
        }
        
        if(cont > 6){
            printf("\n|  ");
            cont = 0;
        }
        
    }
    printf("\n");
    dia = cont;
    
    printf("\ndia: %d\n", dia);
   
}
