#include <iostream>
using namespace std;
int main(int c);
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void gate1(int gat1) {
	int back;
	cout << "___________________________________________\n�������� ����� �� ������...��� �� ��� ����� �� ���������������, �� ����� �������...\n���� 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep1(1);
}
void gate2(int gat2) {
	int back;
	cout << "___________________________________________\n�� ����������� ����� ��� �����������...�������� ����������\n���� 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep2(1);
}
void gate3(int gat3) {
	int back, x;
	cout << "___________________________________________\n�� ��������� ������������ � ������� �������� �� �����...����� ���������� ���������...�� ������� ������\n���� 1" << endl;
	cin >> x;
	if(x>0)
	system("explorer https://youtu.be/dQw4w9WgXcQ");
	cout << endl<<endl<< "�������)" << endl << endl;
	cout << "___________________________________________\n�� ��������� ������������ � ������� �������� �� �����...����� �� ���������, � ��� ���� ���� ������ ��������\n���� 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep3(1);
}
void gate4(int gat4) {
	char yn;
	char x ='0';
	cout << "___________________________________________\n�� ������� � ������� � �������� � ����� ����������, �������� ������ � ������� � �������...\n������ 10 ������ ��������� �����\n___________________________________________\n�� ������� �� ������ ������� � ������� ������� �� ����� ������ �����-�� ������� �����\n������ ���� ������� ����������� ���������...\n�� ���� � ����� ���� � ����� (�� ��� �������...)" << endl;
	cout << endl << endl << endl << "�� ������ ������� ����� ����������? y/n" << endl;
	cin >> yn;
	if (yn == 'y') {
		if (remove("save.txt") != 0)
			cout << endl << endl << endl << "������ �������� ����� ����������" << endl << endl << endl << endl;
		else
			cout << endl << endl << endl << "����� ���������� ������� �������" << endl << endl << endl << endl;
	}
	if (yn == 'n') {
		cout << endl << endl << endl << "������������� ����� ������ ����������" << endl << endl << endl << endl;
		ofstream file("save.txt");
		if (file.is_open()) {
			file << "njbuCxccF@pNiB0dyeR97Q9aP";
			file.close();
		}
	}
	cout << "TTTTTT  HH  HH   AAAA   NN  NN  KK  KK   SSSS  \n  TT    HH  HH  AA  AA  NNN NN  KK KK   SS     \n  TT    HHHHHH  AAAAAA  NN NNN  KKKK     SSSS  \n  TT    HH  HH  AA  AA  NN  NN  KK KK       SS \n  TT    HH  HH  AA  AA  NN  NN  KK  KK   SSSS  " << endl << endl;
	cout << "FFFFFF   OOOO   RRRRR     PPPPP   LL       AAAA   YY  YY  IIIIII  NN  NN   GGGG   !!!\nFF      OO  OO  RR  RR    PP  PP  LL      AA  AA   YYYY     II    NNN NN  GG      !!!\nFFFF    OO  OO  RRRRR     PPPPP   LL      AAAAAA    YY      II    NN NNN  GG GGG  !!!\nFF      OO  OO  RR  RR    PP      LL      AA  AA    YY      II    NN  NN  GG  GG\nFF       OOOO   RR  RR    PP      LLLLLL  AA  AA    YY    IIIIII  NN  NN   GGGG   !!!" << endl;
	cin >> x;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	if (x != '0')
		main(1);
}