#include<iostream>
using namespace std;
int main()
{
int aa,ma,da,an,mn,dn,a,m,d;
cout<<"Ingres la fecha actual (a-m-d): "; 
cin>>aa>>ma>>da;
cout<<"Ingres la fecha de nacimiento (a-m-d): "; 
cin>>an>>mn>>dn;
if(da>dn)
{
	d=da-dn;
}else{
	da=da+30;
	ma=ma-1;
	d=da-dn;
}
if(ma>mn)
{
	m=ma-mn;
}else{
	ma=ma+12;
	aa=aa-1;
	m=ma-mn;
}

a=aa-an;
cout<<"La edad que usted tiene es :"<<a<<" años "<<m<< " meses "<<d<< " dias "<<endl;


return 0;
}
