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
		/*printf("������� ����� ������� 1\n");
		scanf("%d", &n1);
		printf("������� ����� ������� 2\n");
		scanf("%d", &n2);*/
		if (argc<4){
			printf("�������� ���������\n");
			return;
		}
		read_f(rf, &v1, &v2);
		if (v1.n != v2.n) {
			printf("����� �������� �� ���������\n");
			return;
		}
		/*allocate(&v1, n1);
		allocate(&v2, n2);
		fill_vector(&v1);
		fill_vector(&v2);*/;
		printf("�������� ��������\n");
		printf("1-�����, 2-���������, 3-��������� ������������, 0-�����\n");
		scanf("%d", &f);
		switch (f) {
		case 1:
			res = sum(&v1, &v2);
			write_f(wf, &res, "�����");
			//print_vector(&res);
			break;
		case 2:
			res = subtract(&v1, &v2);
			write_f(wf, &res, "���������");
			//print_vector(&res);
			break;
		case 3:
			res = prod(&v1, &v2);
			write_f(wf, &res, "��������� ������������");
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
