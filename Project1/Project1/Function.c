#include "Function.h"

void allocate(vector* v, int n) {
	v->n = n;
	v->cord = (double*)malloc(n * sizeof(double));
}

void fill_vector(vector* v) {
	int i;
	printf("¬ведите координаты вектора ");
	for (i = 0; i < v->n; i++) {
		scanf("%lf", &(v->cord[i]));
	}
	printf("\n");
}

void print_vector(vector* v) {
	int i;
	printf("ќтвет:");
	for (i = 0; i < v->n; i++) {
		printf("%.2lf ", v->cord[i]);
	}
	printf("\n");
}

vector sum(vector* v1, vector* v2) {
	vector res;
	allocate(&res, v1->n);
	for (int i = 0; i < res.n; i++) {
		res.cord[i] = v1->cord[i] + v2->cord[i];
	}
	return res;
}

vector subtract(vector* v1, vector* v2) {
	vector res;
	allocate(&res, v1->n);
	for (int i = 0; i < res.n; i++) {
		res.cord[i] = v1->cord[i] - v2->cord[i];
	}
	return res;
}

vector prod(vector* v1, vector* v2) {
	vector res;
	allocate(&res, 1);
	res.cord[0] = 0;
	for (int i = 0; i < v1->n; i++) {
		res.cord[0] += v1->cord[i] * v2->cord[i];
	}
	return res;
}

