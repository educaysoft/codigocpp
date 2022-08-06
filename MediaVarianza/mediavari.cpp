#include<iostream>
using namespace std;
int main()
{
    float x,a=0,m,arr[30],a2=0,v;
    int c=0,l;
    cout<<" ¿Cuantos numero va a ingresa <30? : "; cin>>l;

do{

      cout<<"Ingrese el valor de x : "; cin>>x;
      arr[c]=x;
      c=c+1;
      a=a+x;

}while(c<l);

m=a/l;
c=0;
do{

a2=a2+(arr[c]-m)*(arr[c]-m);
c=c+1;


}while(c<l);
v=a2/l;

cout<<" La media es "<<m<<" La virianza es  "<<v<<endl;
return 0;

}
