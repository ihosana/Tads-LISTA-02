#include <iostream>

using namespace std;
int main(){
    float  height,resultado_girl, resultado_boy, boy, girl, sexo;

	cout<<"wrinting 1 if You is boy or 2 if you girl?"<<endl;
	cin>> sexo;
	
	cout<<"You is height"<<endl;
	cin>> height;
	
	if( sexo ==1){
		boy=(72.7 * height) ;
		resultado_boy=(boy-58);
		cout<<"Seu peso ideal e "<<resultado_boy;
	}
	else{
		 if(sexo == 2){
	   	 girl=(61.1 * height);
	     resultado_girl=(girl - 44.7);
		 cout<<"Seu peso ideal e "<<resultado_girl;
	   }
	   else{
		 cout<<"credenciais invalidas";
	   	
	   }
	}
	return 0;
}
