#include <iostream>
using namespace std;
void enter1(int ent1, int con1);
void enter2(int ent2, int con2);
void enter3(int ent3, int con3);
void cyc1(int cp1) { //��������� ����
	if (cp1 == 1)
		enter1(1, 0);
}
void cyc2(int cp2) { //���� ����
	if (cp2 == 1)
		enter2(1, 0);
}
void cyc3(int cp3) { //���� ����� � �������
	if (cp3 == 1)
		enter3(1, 0);
}