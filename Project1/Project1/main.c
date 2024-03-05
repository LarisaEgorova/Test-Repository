#include "Function.h"

void main(int argc, char **argv) {
	vector v1, v2, res = { 0, 0 };
	int n1 = 0, n2 = 0, f;
	char* rf, *wf;
	setlocale(LC_ALL, "ru");

	rf = argv[2];
	wf = argv[3];
	clean_f(wf);

	while (1) {
		/*printf("Введите длину вектора 1\n");
		scanf("%d", &n1);
		printf("Введите длину вектора 2\n");
		scanf("%d", &n2);*/
		if (argc<4){
			printf("Неверные аргументы\n");
			return;
		}
		read_f(rf, &v1, &v2);
		if (v1.n != v2.n) {
			printf("Длины векторов не совпадают\n");
			return;
		}
		/*allocate(&v1, n1);
		allocate(&v2, n2);
		fill_vector(&v1);
		fill_vector(&v2);*/;
		printf("Выберите операцию\n");
		printf("1-сумма, 2-вычитание, 3-скалярное произведение, 0-выход\n");
		scanf("%d", &f);
		switch (f) {
		case 1:
			res = sum(&v1, &v2);
			write_f(wf, &res, "Сумма");
			//print_vector(&res);
			break;
		case 2:
			res = subtract(&v1, &v2);
			write_f(wf, &res, "Вычитание");
			//print_vector(&res);
			break;
		case 3:
			res = prod(&v1, &v2);
			write_f(wf, &res, "Скалярное произведение");
			//print_vector(&res);
			break;
		case 0:
			break;
		default:
			printf("Неверный ввод");
		}
		if (f == 0) break;
	}
	free(v1.cord);
	free(v2.cord);
	if (res.cord != 0) {
		free(res.cord);
	}
	return;
}
