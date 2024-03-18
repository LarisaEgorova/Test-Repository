#include "Function.h"

int main(int argc, char** argv) {

	setlocale(LC_ALL, "ru");
	vector v1, v2, res;
	ofstream ostream;
	ifstream istream;
	double res1;
	string rf, wf;
	rf = argv[2];
	wf = argv[3];
	ostream.open(wf, ios_base::trunc);
	ostream.close();
	while (true) {
		istream.open(rf, ios_base::in);
		istream >> v1 >> v2;
		istream.close();
		int f = 0;
		cout << "1-�����, 2-���������, 3-��������� ������������, 0-�����" << endl;
		cin >> f;
		try {
			switch (f) {
			case 1:
				res = v1 + v2;
				ostream.open(wf, ios_base::app);
				ostream << "�����: " << res << endl;
				ostream.close();
				break;
			case 2:
				res = v1 - v2;
				ostream.open(wf, ios_base::app);
				ostream << "��������: "  << res << endl;
				ostream.close();
				break;
			case 3:
				res1 = v1 * v2;
				ostream.open(wf, ios_base::app);
				ostream << "��������� ������������:" << res1<< endl;
				ostream.close();
				break;
			case 0:
				cout << "����������..." << endl;
				break;
			default:
				cout << "������������ ����" << endl;
				break;
			}
		}
		catch (const std::exception& ex)
		{
			ostream.open(wf, ios_base::app);
			ostream << ex.what() << endl;
			ostream.close();
		}
		if (f == 0) break;
	}

	return 0;
}
