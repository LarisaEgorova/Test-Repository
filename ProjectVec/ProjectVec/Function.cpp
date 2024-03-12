#include "Function.h"

vector::vector() {
	this->n = 0;
	this->x = nullptr;
}

vector::vector(int n) {
	this->n = n;
	this->x = new double[n];
}

vector::vector(const vector& v) {
	this->n = v.n;
	this->x = new double[this->n];
	for (int i = 0; i < n; i++) {
		this->x[i] = v.x[i];
	}
}

vector::~vector() {
	delete[] this->x;
}

vector vector:: operator +(const vector& v) {
	if (this->n != v.n) {
		throw exception("Длины векторов не равны");
	}
	vector res(this->n);
	for (int i = 0; i < this->n; i++) {
		res.x[i] = this->x[i] + v.x[i];
	}
	return res;
}

vector vector:: operator -(const vector& v) {
	if (this->n != v.n) {
		throw exception("Длины векторов не равны");
	}
	vector res(this->n);
	for (int i = 0; i < this->n; i++) {
		res.x[i] = this->x[i] - v.x[i];
	}
	return res;
}

double vector :: operator *(const vector& v) {
	if (this->n != v.n) {
		throw "Длины векторов не равны";
	}
	double res = 0;
	for (int i = 0; i < this->n; i++) {
		res += this->x[i] + v.x[i];
	}
	return res;
}

vector& vector :: operator =(const vector& v) {
	this->n = v.n;
	if (this->x != nullptr) {
		delete[] new double[v.n];
	}
	this->x = new double[v.n];
	for (int i = 0; i < this->n; i++) {
		this->x[i] = v.x[i];
	}
	return *this;
}

istream& operator >>(istream& in, vector& v) {
	cout << "Введите длину n: ";
	in >> v.n;
	cout << v.n << "Введите координаты x: ";
	if (v.x != nullptr) {
		delete[] v.x;
	}
	v.x = new double[v.n];
	for (int i = 0; i < v.n; i++) {
		in >> v.n;
	}
	return in;
}

ostream& operator <<(ostream& out, const vector& v) {
	out << "Вектор: ";
	for (int i = 0; i < v.n; i++) {
		out << v.x[i] << " ";
	}
	return out;
}

