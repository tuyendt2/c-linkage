#include "header.h"
#include "iostream"

using namespace std;
int x = 101;
void dummy_function(){
	cout << "calling dummy_function() ++a == " << ++a << endl;
	cout << "address of a in source.cpp == " << &a << endl;
	cout << "calling dummy_function() b == " << b << endl;
	cout << "address of b in source.cpp == " << &b << endl;
	cout << "calling dummy_function() x == " << x << endl;
	cout << "address of x in source.cpp == " << &x << endl;
	cout << "calling dummy_function() variable == " << variable << endl;
	cout << "address of variable in source.cpp == " << &variable << endl;
}

void testFunctionWithoutDefinition(){
	cout << "calling testFunctionWithoutDefinition() in source.cpp" << endl;
};