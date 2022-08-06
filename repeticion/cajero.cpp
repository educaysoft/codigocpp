#include<iostream>
using namespace std;
int main()
{
 int tt;
 float x,s=0;
 do{
  cout<<"Ingrese el tipo de transacción: "; cin>>tt;


  if(tt==1){
  cout<<"Ingrese el valor a depositar: "; cin>>x;
  s=s+x;
  }


  if(tt==2){
  cout<<"Ingrese el valor a retirar: "; cin>>x;
  s=s-x;
  }


  if(tt==3){
  cout<<"Su saldo actual es : "<<s<<endl<<endl;
  }

 }while(tt!=0);

 return 0;

}
~              
