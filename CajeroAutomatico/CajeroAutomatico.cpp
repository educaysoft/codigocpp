#include<iostream>
using namespace std;
int main()
{
  int l=5,c=0,tt;
  float x,s=0;
  do{
	  cout<<"Ingrese el tipo de transacciones : "; cin>>tt;
	  if (tt==1)
	{
	  cout<<"Cuanto quiere depositar: "; cin>>x;
		s=s+x;
	}
	  if(tt==2)
	  {
	  cout<<"Cuanto quiere retirar: "; cin>>x;
		  s=s-x;
	  }
	  if(tt==3)
	  {
		  cout<<"Su saldo es : "<<s<<endl<<endl;
	  }
	  if(tt==0)
	  {
            c=l;
	  }
  }while(c<l );

  return(0);



}
