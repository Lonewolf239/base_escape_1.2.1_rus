#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void cyclep4(int cp4);
void shed1(int shd1) {
	int put;
	cout << "___________________________________________\n������ ����� � ����� ������...�� ������ �� ������..�����\n�������� ���� 1; ���� 2" << endl;
	cin >> put;
	if (put == 1) {
		cout << "___________________________________________\n������� ����, �� ������� ������� �� ����� �����\n�� ����� ����������" << endl;
		cyclep2(1);
	}
	else
		cyclep1(1);
}
void shed2(int shd2) {
	cout << "___________________________________________\n��� ������ ��� ������ �����������..." << endl;
		cyclep2(1);
}
void shed3(int shd3) {
	cout << "___________________________________________\n��� ������ ��� ������ �����������..." << endl;
		cyclep3(1);
}
void shed4(int shd4) {
	cout << "___________________________________________\n��� ������ ��� ������ �����������..." << endl;
	cyclep4(1);
}