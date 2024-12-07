
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // переключение локализации консоли
	unsigned int new_n, n;
	cout << "Введите n: ";  cin >> n;
	new_n = 1 << n;// Сдвигаем число 1 влево на n бит, что эквивалентно вычислению 2^n и сохраняем результат в new_n
	cout << new_n << "(10)" << endl;
	cout << hex << new_n << "(16)" << endl;
	cout << oct << new_n << "(8)";
}
07/12/2024