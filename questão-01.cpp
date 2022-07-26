#include <iostream>

using namespace std;

int main(){
	float x, y, z, operacion, operacion2, operacion3;
	cout<<"digite a primeira medida"<<endl;
	cin>>x;
	cout<<"digite a segunda medida"<<endl;
	cin>>y;
	cout<<"digite a terceira medida"<<endl;
	cin>>z;
     
   operacion = (x + y);
   operacion2= (x + z);
   operacion3= (z + y);
 if( operacion > z && operacion2 > y && operacion3 > x){
 	cout<<" e um triangulo";
 	
      if(x == y && x == z){
       cout<<" equilatero";
    }
	else{
	  	if( x == y || x == z || z == y){
			cout<<" isoceles";
	 	}
	 	else{
			cout<<" escaleno";
		}
	}	
 }
 else{
 	cout<<" N e um triangulo";
 }
	return 0;
}

