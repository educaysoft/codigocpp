//============================================
//== Programa principal en C++
//== Version: 001
//== Autor: Stalin Francis
//== Fecha de cración: 07-08-2022
//== Fecha de ultima actualizacipón: 07-08-2022
//=============================================

#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc>1)
	{
		cout<<"Hola mundo "<<endl;
		cout<<"Mi nombre es "<<argv[1]<<endl;
	}else{
		cout<<"Hola mundo "<<endl;
	}
	return 0;
}
