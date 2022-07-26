#include<iostream>
using namespace std;

int main(){ 
float a , b, c, x, x1,x1_1, x2, x2_2, delta,delta1, delta2,delta3, resolucion;

cout<<"Digite o valor de a"<<endl; 
cin>> a;
cout<<"Digite o valor de b"<<endl; 
cin>> b;
cout<<"Digite o valor de c"<<endl; 
cin>> c;

  if(a == 0)
  {	
     cout<<"Nao e uma equacao do 2° :("<<endl;
  }
 else
  {
        delta=(-(b)*b );
	    delta1=(4 * (a) *(c));
    	delta2=(delta - delta1);
	    delta3=(delta2 * delta2);
    	
		x1=( delta3/ 2*a );
        x1_1=(-(b) + x1);
        x2=(x1);
        x2_2=(-(b) - x2);
   	 if(delta3 < 0)
	   {
	      cout<<"Nao existe raiz"<<x;
	      
	   }
      else
	  {
	    if(delta3 == 0){
	    	cout<<"existe raiz: "<<endl;
		}
		else{
		 	cout<<"existe raiz, x1 : "<<x1_1;
           
	    	cout<<"existe raiz, x2 : "<<x2_2;	
		}
			
      }
   }
}

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cin >> x;
    cout << sqrt(x) << endl;
    return 0;
}*/
