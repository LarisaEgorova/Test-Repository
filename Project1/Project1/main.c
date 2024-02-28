#include "Function.h"

void main() {
	vector v1, v2, res;
	int n1 = 0, n2 = 0, f;
	const char* s1 = "vector_r.txt";
	const char*s2="vector_w.txt";

	setlocale(LC_ALL, "ru");

	while (1) {
		/*printf("������� ����� ������� 1\n");
		scanf("%d", &n1);
		printf("������� ����� ������� 2\n");
		scanf("%d", &n2);*/
		read_f(s1, &v1, &v2);
		if (v1.n != v2.n) {
			printf("����� �������� �� ���������,");
			printf("�������� �� ���������, ������� ����� ��� ���\n");
			continue;
		}
		/*allocate(&v1, n1);
		allocate(&v2, n2);
		fill_vector(&v1);
		fill_vector(&v2);*/
		printf("�������� ��������\n");
		printf("1-�����, 2-���������, 3-��������� ������������, 0-�����\n");
		scanf("%d", &f);
		switch (f) {
		case 1:
			res = sum(&v1, &v2);
			//print_vector(&res);
			write_f(s2, &res);
			break;
		case 2:
			res = subtract(&v1, &v2);
			write_f(s2, &res);
			//print_vector(&res);
			break;
		case 3:
			res = prod(&v1, &v2);
			write_f(s2, &res);
			//print_vector(&res);
			break;
		case 0:
			break;
		default:
			printf("�������� ����");
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
