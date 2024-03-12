#pragma once

#include <iostream>
#include <locale.h>
#include <string>
#include <exception>

using namespace std;

struct vector {
	int n;
	double* x;

	vector();
	vector(int n);
	vector(const vector&);
	~vector();

	vector operator +(const vector&);
	vector operator -(const vector&);
	double operator *(const vector&);
	vector& operator =(const vector&);
};

istream& operator >>(istream& in, vector& v);
ostream& operator <<(ostream& out, const vector& v);

