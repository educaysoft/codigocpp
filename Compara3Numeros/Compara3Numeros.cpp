#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Ingres 3 numero : ";
	cin>>a>>b>>c;
	if(a<b)
	{
          if(a<c){
		  cout<<"El numero menor es  "<<a<<endl;
	  }else{
		  cout<<"El numero menor es "<<c<<endl;
	  }
	}else{
		if(b<c){
		      cout<<"El numero menor es "<<b<<endl;
		}else{
			if(c<a){
		  		cout<<"El numero menor es  "<<a<<endl;
			}
			else{
		  		cout<<"El numero menor es "<<c<<endl;
			}
		}
	}
return 0;
}
