#include <iostream>
#include "String112.h"
using namespace std;

void main() {

	String112 testStr1{};
	cout << "Constructor by default: ";
	testStr1.print();
	cout << endl << endl;

	String112 testStr2{"Hello World!"};
	cout << "Constructor with [\"Hello World!\"]: ";
	testStr2.print();
	cout << endl << endl;

	String112 testStr3{ 5, '!' };
	cout << "Constructor with [5] and ['!']: ";
	testStr3.print();
	cout << endl << endl;

	String112 testStr4{ "Hello World!!!", 12};
	cout << "Constructor with [Hello World!!!] and [12]: ";
	testStr4.print();
	cout << endl << endl;

	String112 testStr5{ testStr4 };
	cout << "Copy constructor: ";
	testStr5.print();
	cout << endl << endl;

	testStr3.setString112("Hello World!");
	cout << "Setted string: ";
	testStr3.print();
	cout << endl << endl;

	testStr3.clear();
	cout << "Cleared string: ";
	testStr3.print();
	cout << endl;
}