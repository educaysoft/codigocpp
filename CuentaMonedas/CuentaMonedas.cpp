#include<iostream>
using namespace std;

int main()
{
int l,c=0,c1=0,c2=0,c3=0;
float x,a=0,a1=0,a2=0,a3=0;
cout<<"Ingrese la cantidad de monedas: "; cin>>l;
do{

cout<<"Ingrese la denominacion de la moneda x=";cin>>x;
c=c+1;
a=a+1;
if(x==1){
c1=c1+1;
a1=a1+x;
}

if(x==0.5){
c2=c2+1;
a2=a2+x;
}


if(x==0.25){
c3=c3+1;
a3=a3+x;
}
}while(c<l);

cout<<"Se ingresaron "<<c<<  " Monedas y un total de "<<a<<"  Dolares"<<endl;
cout<<"Se ingresaron "<<c1<<  " Monedas de $1 que suman    "<<a1<<"  Dolares"<<endl;
cout<<"Se ingresaron "<<c2<<  " Monedas de $0.50 que suman "<<a2<<"  Dolares"<<endl;
cout<<"Se ingresaron "<<c3<<  " Monedas de $0.25 y un total de "<<a3<<"  Dolares"<<endl;


return 0;

}

