#pragma once

#include <sstream>
#include <iostream>
#include <locale.h>
#include <string>
#include <exception>
#include <fstream>

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

	//friend istream& operator >>(istream& in, vector& v);
	friend ostream& operator <<(ostream& out, const vector& v);
	friend ofstream& operator <<(ofstream& out, vector& v);
	friend ifstream& operator >>(ifstream& in, vector& v);

};
