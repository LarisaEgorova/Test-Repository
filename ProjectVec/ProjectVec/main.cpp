#include "Function.h"

int main() {

	setlocale(LC_ALL, "ru");
	vector v1, v2, res;
	double res1;
	while (true) {
		cout << "Задайте векторы:" << endl;
		cin >> v1 >> v2;
		int f = 0;
		cout << "1-сумма, 2-вычитание, 3-скалярное произведение, 0-выход" << endl;
		cin >> f;
		try {
			switch (f) {
			case 1:
				res = v1 + v2;
				cout << "Сумма: " << res << endl;
				break;
			case 2:
				res = v1 - v2;
				cout << "Разность: " << res << endl;
				break;
			case 3:
				res1 = v1 * v2;
				cout << "Скалярное произведение: " << res1 << endl;
				break;
			case 0:
				cout << "Завершение..." << endl;
				break;
			default:
				cout << "Некорректный ввод" << endl;
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
