#include<iostream>
#include "struct.h"
#include "class.h"
using namespace std;
using namespace StructInheritance;


void print()
{
	//Argument* param = Argument::get();
	//cout << "param.height = " << param->height << endl;
	//cout << "param.width = " << param->width << endl;
	cout << "the second time to call get() " << endl;
	ClassImpl* classImpl = ClassImpl::get();
	cout << "classImpl->height = " << classImpl->height << endl;
	cout << "classImpl->width = " << classImpl->width << endl;
}


int main()
{
	//Argument* argument = Argument::get();
	//argument->height = 100;
	//argument->width = 200;
	//print();
	//return 0;
	cout << "the first time to call get() " << endl;
	ClassImpl *classImpl = ClassImpl::get();
	classImpl->height = 50;
	classImpl->width = 60;
	print();
	return 0;
	

}