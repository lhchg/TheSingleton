#include<iostream>
#include "struct.h"
using namespace std;
using namespace StructInheritance;


void print()
{
	Argument* param = Argument::get();
	cout << "param.height = " << param->height << endl;
	cout << "param.width = " << param->width << endl;
}


int main()
{
	Argument* argument = Argument::get();
	argument->height = 100;
	argument->width = 200;
	print();
	return 0;

}