#include<iostream>
using namespace std;
int main()
{
	int c=0,l;
	float x,a=0;
	cout<<"Ingreas la cantidad de numero a sumar: ";
	cin>>l;
	do{

	cout<<"Ingrese un número ";
	cin>>x;
	c=c+1;
	a=a+x;
	}while(c<l);
	cout<< "El resultado fue : "<<a<<endl;
	return 0;
}
