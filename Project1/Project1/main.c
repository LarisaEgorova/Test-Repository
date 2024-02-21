#include <stdio.h>
#include <locale.h>

typedef struct  {
	int n;
	double *cord;
} vector;

void allocate(vector * v, int n);
void fiil_vector(vector* v);
vector sum(vector* v1, vector* v2);
vector product (vector* v1, vector* v2);
vector subtract(vector* v1, vector* v2);


void main() {
	vector v1, v2, res;
	int n1=0, n2=0, f;

	setlocale(LC_ALL, "ru");

	printf("Введите длину вектора 1\n");
	scanf("%d", &n1);
	printf("Введите длину вектора 2\n");
	scanf("%d", &n1);
	allocate(&v1, n1);
	allocate(&v2, n2);
	while (1) {
		printf("Выберите операцию\n");
		printf("1-сумма, 2-вычитание, 3-скалярное произведение, 0-выход\n");
		scanf("%d",&f);
		switch (f) {
		case 1:
			res=sum(&v1,&v2);
			break;
		case 2:
			product(&v1,&v2);
			break;
		case 3:
			subtract(&v1,&v2);
			break;
		case 0:
			break;
		default:
			printf("Неверный ввод");
		}
		for (int i = 0; i < n1; i++) {
			printf("%lf", res.cord[i]);
		}
	}
	return;
	}

void allocate(vector* v, int n) {
	v->n = n;
	v->cord = (double*)malloc(sizeof(double) * n);
}

void fill_vector(vector* v) {
	int i;
	printf("Введите координаты вектора ");
	for (i = 0; i < v->n; i++) {
		scanf("%lf", &(v->cord[i]));
	}
}

vector sum(vector* v1, vector* v2) {
	vector res;
	allocate(&res, v1->n);
	for (int i = 0; i < res.n; i++) {
		res.cord[i] = v1->cord[i] + v2->cord[i];
	}
	return res;
}

vector product(vector* v1, vector* v2) {
	;
}

vector subtract(vector* v1, vector* v2) {
	;
}

