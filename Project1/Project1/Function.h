#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <locale.h>
#include <malloc.h>

typedef struct {
	int n;
	double* cord;
} vector;

void allocate(vector* v, int n);
void fill_vector(vector* v);
void print_vector(vector* v);
vector sum(vector* v1, vector* v2);
vector prod(vector* v1, vector* v2);
vector subtract(vector* v1, vector* v2);
void read_f(char*f, vector* v1, vector* v2);
void write_f(char* file, vector* res);
void clean_f(char* file);

#endif 
