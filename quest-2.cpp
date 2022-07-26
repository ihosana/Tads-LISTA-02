#include <iostream>
using namespace std;
int main(){
	int primeiro, val;
	cout<<" Digite um numero"<<endl;
    cin>> primeiro;

  val=(primeiro/2);
  
  if(val*2 == primeiro)
  {
     cout<<"PAR";
     if(primeiro < 100){
  	    cout<<" e menor que 100";
       }
     else{
  	    cout<<" e maior que 100";
       }
   }
    else{
	
    cout<<"IMPAR";

	if( primeiro < 0 ){
    	cout<<" is negative";
	}
	else{
		cout<<" is positive";
	}
 
}
 return 0;   
}

/*-------TENTATIVAS-------
 cout<<"IMPAR"<<endl;
	calculo=(primeiro*(primeiro));
	fim=(calculo/3);

 	calculo=(primeiro/3);
      solucion=(calculo*3);
	if( solucion == primeiro ){
     
calculo=(primeiro/3);

      
	if( calculo*3 == primeiro){
	calculo=(primeiro)*(primeiro);
	  fim  =   (calculo/3);
      
  val= ( primeiro/2 );
  
  switch(val/2 =primeiro ){
  	case 0: 
	cout<<"Par"<<endl; 
    break;
   	case 2: 
	  cout<<"Par"<<endl; 
	  if(primeiro >100){
  	cout<<"maior que 100"<<endl;
    }
    else{
  	cout<<"menor que 100"<<endl;
    }
    break;
    	case 4: 
	  cout<<"Par"<<endl; 
    break;
    	case 6: 
	  cout<<"Par"<<endl; 
    break;
    	case 8: 
	  cout<<"Par"<<endl; 
    break;
  }
 
  if(primeiro/2 != 0)
  {
  	cout<<"impar"<<endl;
  }
  else{
  	cout<<"e demais";
  }
  	*/

