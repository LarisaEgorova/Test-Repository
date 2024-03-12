#include "Function.h"

int main() {

	setlocale(LC_ALL, "ru");

	vector v1, v2;
	cin >> v1 >> v2;
	vector res = v1 + v2;
	cout << res;

	return 0;
}