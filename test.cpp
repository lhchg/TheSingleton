#include<iostream>
#include "struct.h"
using namespace std;
using namespace StructInheritance;


void print()
{
	cout << "the second time to call get() " << endl;
	Argument* param = Argument::get();
	cout << "param.height = " << param->height << endl;
	cout << "param.width = " << param->width << endl;
}


int main()
{
	cout << "the first time to call get() " << endl;
	Argument* argument = Argument::get();
	argument->height = 100;
	argument->width = 200;
	print();
	return 0;

}