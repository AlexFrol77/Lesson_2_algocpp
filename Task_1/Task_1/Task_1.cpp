#include <iostream>
#include <Windows.h>

void num_fibonach(int a, int b, int num) {
	int temp = a + b;
	if (a == 1 && b == 1) {
		std::cout << a << " " << b << " ";
	}
	b = a;
	a = temp;
	if (temp < num) {
		std::cout << temp << " ";
		num_fibonach(a, b, num);
	}
	else {
		std::cout << std::endl;
	}
}


int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int	a = 1,
		b = 1,
		num = 0;

	std::cout << "Введите число: ";
	std::cin >> num;

	num_fibonach(a, b, num);

	return 0;
}