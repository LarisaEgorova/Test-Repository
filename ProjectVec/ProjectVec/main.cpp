#include "Function.h"

int main() {

	setlocale(LC_ALL, "ru");
	vector v1, v2, res;
	double res1;
	while (true) {
		cout << "������� �������:" << endl;
		cin >> v1 >> v2;
		int f = 0;
		cout << "1-�����, 2-���������, 3-��������� ������������, 0-�����" << endl;
		cin >> f;
		try {
			switch (f) {
			case 1:
				res = v1 + v2;
				cout << "�����: " << res << endl;
				break;
			case 2:
				res = v1 - v2;
				cout << "��������: " << res << endl;
				break;
			case 3:
				res1 = v1 * v2;
				cout << "��������� ������������: " << res1 << endl;
				break;
			case 0:
				cout << "����������..." << endl;
				break;
			default:
				cout << "������������ ����" << endl;
				break;
			}
		}
		catch (const std::exception&ex)
		{
			cout<<ex.what()<<endl;
		}
		if (f == 0) break;
	}

	return 0;
}
