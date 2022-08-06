#include<iostream>
using namespace std;
int main()
{
  float Tb,piva,pdesc,Iva,Desc,Tp;
  cout<<"Ingrese el Total bruto: "; cin>>tb;
  cout<<"Ingrese el % de iva : "; cin>>piva;
  cout<<"Ingrese el % descuento: "; cin>>pdesc;
  Iva=Tb*piva/100;
  Desc=Tb*pdesc/100;
  Tp=Tb+Iva-Desc;
  cout<<"El valor que debe padar es : "<<Tp<<endl;
}
  
