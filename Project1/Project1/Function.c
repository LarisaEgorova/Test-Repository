#include "Function.h"

void allocate(vector* v, int n) {
	v->n = n;
	v->cord = (double*)malloc(n * sizeof(double));
}

void fill_vector(vector* v) {
	int i;
	printf("Введите координаты вектора ");
	for (i = 0; i < v->n; i++) {
		scanf("%lf", &(v->cord[i]));
	}
	printf("\n");
}

void print_vector(vector* v) {
	int i;
	printf("Ответ:");
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

void read_f(char *file, vector* v1, vector* v2) {
	int n1 = 0; int n2 = 0;
	FILE* f = fopen(file, "r+");
	fscanf(f, "%d", &n1);
	fscanf(f, "%d", &n2);
	v1->n = n1;
	v2->n = n2;
	allocate(v1, n1);
	allocate(v2, n2);
	for (int i = 0; i < v1->n; i++) {
		fscanf(f,"%lf", &(v1->cord[i]));
	}
	for (int i = 0; i < v2->n; i++) {
		fscanf(f,"%lf", &(v2->cord[i]));
	}
	fclose(f);
	return;
}
void write_f(char* file, vector* res) {
	FILE *f = fopen(file, "a+");
	fprintf(f,"Ответ: ");
	for (int i = 0; i < res->n; i++) {
		fprintf(f, "%.2lf ", res->cord[i]);
	}
	fprintf(f,"\n");
}

