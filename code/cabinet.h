#include <iostream>
using namespace std;
void enter1(int ent1, int con1);
int main(int c);
void cyep2(int cy2);
void cyep3(int cy3);
void cyep5(int cy5);
void cyep5(int cy5);
void floor3(int fl3, int fr3);
void cabinet1(int cab1) {
	if (cab1 == 1) {
		char dead = '0';
		cout << "___________________________________________\n�� �� �����...\n-���, ��������� �������. �� ��� �� ������? �� �� �� ������� �������� ��������� ��������!\n����...��������� ���� ���� ����� ���� ����� ��������� �� ���� ����� �� ��...� �� ���� ��� ������...�� ����!..\n�� �������" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
}
void cabinet2(int cab2) {
	int x;
	if (cab2 == 1) {
		cout << "___________________________________________\n�� ������� ����� � ����� � ���������� �������...��� ��� ����� ���������� ������� � ����� ������� �����\n������� �� ����� �� ����� �� ������� ���� ����...\n����� �� ������ �� �����-�� ����� �� �����...������� ���-�� ��������� �����...\n���� 1" << endl;
		cin >> x;
	}
	if (x == 1) {
		ofstream file("save.txt");
		if (file.is_open()) {
			file << "v?n8*pnqXdb@?Wo~|o2H1ZvpB";
			file.close();
			cout << endl << "���������� ������ �������" << endl;
		}
		cyep3(1);
	}
}
void cabinet3(int cab3) {
	if (cab3 == 1) {
		cout << "___________________________________________\n�� ���� ������ �� ������ ��� �������..."<<endl;
		cyep3(1);
	}
}
void cabinet4(int cab4) {
	char dead = '0';
	if (cab4 == 1) {
		int con;
		cout << "___________________________________________\n�� ����� � �������...�� ������ �� ��� �� �� ������� ���� ����...�� ������ �� ��� ��� ���\n��� �� ���������?\n����� - ������; ������� - ����� 1\n����� - �����; ������� - ������ 2" << endl;
		cin >> con;
		if (con == 1) {
			cout << "___________________________________________\n����� ����������� �� ���� �����...��� ������ �� ����� ����� ��������� ����...� �� ������ ������� � ���������" << endl;
			cyep5(1);
		}
		if (con == 2) {
			cout << "___________________________________________\n����� �����������...�� ��� �� �������� � ����� �� ���...����� � ������� ����� ������������...\n������ ��� ���� ���� ������������ �������� �������\n�� �������" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			cin >> dead;
			if (dead != '0')
				main(0);
		}
	}
}
void cabinet5(int cab5) {
	if (cab5 == 1) {
		cout << "___________________________________________\n��� ��� ������ ������ �����������..." << endl;
		cyep5(1);
	}
}