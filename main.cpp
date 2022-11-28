#include "iostream"
#include "header.h"

using namespace std;
// the following definition will lead to linking error cause  multiple definition of `x', first in source.cpp via 'int x = 101;'
//extern int x = 110;
// Only declaration is acceptable here, x has external linkage
extern int x;
auto main() -> int{
	a = 1000;
	x = 1001;
	dummy_function();
	cout << "a == " << a << endl;
	cout << "address of a in main.cpp == " << &a << endl;
	cout << "b == " << b << endl;
	cout << "address of b in main.cpp == " << &b << endl;
	cout << "variable == " << variable << endl;
	cout << "address of variable in main.cpp == " << &variable << endl;	
	cout << "x == " << x << endl;
	cout << "address of x in main.cpp, it should refer to the same address as in source.cpp : " << &x << endl;
	testFunctionWithoutDefinition();
	testFunctionWithDefinition();
	return 0;
}

void testFunctionWithoutDefinition(){
	cout << "calling testFunctionWithoutDefinition() in main.cpp" << endl;
};