#ifndef HEADER
#define HEADER
#include "iostream"
using namespace std;
void dummy_function();
// the following definition fails to link cause global variable is extern by default
//int a = 100;
// static key-work make variable become internal linkage, so linker not complain about it anymore. 
// each copy of variable a in each .cpp file (which will create different translation unit) refer to different address
static int a = 100;
// const global variable is internal linkage by default
const int b = 10;
// require 'static' keyword to avoid multiple definition linking error 
static void testFunctionWithoutDefinition();
// also require 'static' keyword to avoid multiple definition linking error 
static void testFunctionWithDefinition(){
	cout << "calling testFunctionWithDefinition() in header.h" << endl;
}
#endif