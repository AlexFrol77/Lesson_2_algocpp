#include <iostream>
#include <Windows.h>
#include <vector>

void num_fibonach(int num, std::vector <int>& vec_num) {
	int temp = vec_num[vec_num.size() - 2] + vec_num[vec_num.size() - 1];
	if (temp < num) {
		vec_num.push_back(temp);
		num_fibonach(num, vec_num);
	}
}

int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num;
	std::vector <int> vec_num = { 1, 1 };

	std::cout << "Введите число: ";
	std::cin >> num;

	num_fibonach(num, vec_num);

	for (int i : vec_num) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}
