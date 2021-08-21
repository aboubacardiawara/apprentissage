#include <iostream>
#include "ZFraction.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << endl  << " ---------- test ---------- " << endl;
	// sum ---------------------
	ZFraction f(2, 4), g(3, 4), result;
	result = f + g;
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	cout << "result (f+g), expected (5/4), output: ";
	result.print(); 

	// difference ---------------------
	f.setNumerator(1);
	f.setDenominator(2);
	g.setNumerator(2);
	g.setDenominator(2);
	result = f - g;
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	cout << "result (f-g), expected (-1/2), output: "; 
	result.print();

	f.setNumerator(1);
	f.setDenominator(2);
	g.setNumerator(2);
	g.setDenominator(4);
	result = f - g;
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	cout << "result (f-g), expected (0/8), result: "; 
	result.print();

	// product ---------------------
	f.setNumerator(1);
	f.setDenominator(2);
	g.setNumerator(2);
	g.setDenominator(2);
	result = f * g;
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	cout << "result (f*g), expected (2/4), output: "; 
	result.print();

	f.setNumerator(0);
	f.setDenominator(2);
	g.setNumerator(2);
	g.setDenominator(2);
	result = f * g;
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	cout << "result (f*g), expected (0/4), output: "; 
	result.print();

	// division ---------------------
	f.setNumerator(1);
	f.setDenominator(2);
	g.setNumerator(3);
	g.setDenominator(2);
	result = f / g;
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	cout << "result (f/g), expected (2/6), output: ";
	result.print();

	// shorcut addition (+=) ---------------------
	f.setNumerator(0);
	f.setDenominator(2);
	g.setNumerator(3);
	g.setDenominator(2);
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	f += g;
	cout << "f (f += g), expected (3/2), output: ";
	f.print();

	// shorcut difference (-=) ---------------------
	f.setNumerator(3);
	f.setDenominator(2);
	g.setNumerator(3);
	g.setDenominator(2);
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	f -= g;
	cout << "f (f -= g), expected (0/2), output: ";
	f.print();

	// shorcut difference (*=) ---------------------
	f.setNumerator(3);
	f.setDenominator(2);
	g.setNumerator(3);
	g.setDenominator(2);
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	f *= g;
	cout << "f (f *= g), expected (9/4), output: ";
	f.print();

	// shorcut difference (/=) ---------------------
	f.setNumerator(3);
	f.setDenominator(2);
	g.setNumerator(3);
	g.setDenominator(2);
	cout << "f: ";
	f.print();

	cout << "g: ";
	g.print();

	f /= g;
	cout << "f (f /= g), expected (6/6), output: ";
	f.print();

	return 0;
}