
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // ������������ ����������� �������
	unsigned int new_n, n;
	cout << "������� n: ";  cin >> n;
	new_n = 1 << n;// �������� ����� 1 ����� �� n ���, ��� ������������ ���������� 2^n � ��������� ��������� � new_n
	cout << new_n << "(10)" << endl;
	cout << hex << new_n << "(16)" << endl;
	cout << oct << new_n << "(8)";
}
07/12/2024