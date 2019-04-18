//============================================================================
// Name        : pointers.cpp
// Author      : Sanket_Benade
// Version     :
// Copyright   : Caution !!!!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

int main() {
	//declaring pointer
	int *pointer;
	int id=10;

	//pointer defining
	pointer=&id;

	//outputs
	cout<<"address of integer id :"<<&id<<endl;        // prints address of integer id
	cout<<"address of integer id :"<<pointer<< endl;   // prints address of integer id i.e value of pointer
	cout<<"valu of integer id    :"<<*pointer<<endl;   // prints value of integer id
	cout<<"address of pointer    :"<<&pointer<<endl;   // prints address of pointer
	return 0;
}
