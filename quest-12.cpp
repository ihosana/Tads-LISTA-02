#include<iostream>

using namespace std;

int main(){

int idade, anos_trabalho ;

cout<<"Digite sua idade"<<endl;
cin>>idade;

cout<<"Digite os anos de trabalho"<<endl;
cin>>anos_trabalho;

if(idade >= 65 && anos_trabalho >= 30 || idade >= 60 && anos_trabalho >= 25){
	cout<<"ce tem direito a aposentadoria"<<endl;
}
  else{
	cout<<"da pra trabalhar muito ainda homiiii"<<endl;
}
}
