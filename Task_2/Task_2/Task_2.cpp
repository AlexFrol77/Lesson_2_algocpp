#include <iostream>
#include <Windows.h>
#include <vector>

int num_fibonach(int num, std::vector <int>& vec_num) {
	int temp = vec_num[vec_num.size() - 2] + vec_num[vec_num.size() - 1];
	if (temp < num) {
		vec_num.push_back(temp);
		num_fibonach(num, vec_num);
	}
	else {
		return vec_num.back();
	}
}
void print(std::vector <int> vec_num, int num_back) {
	for (int i : vec_num) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	std::cout << "Последнее рассчитанное число: " << num_back << std::endl;
}

int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num;
	std::vector <int> vec_num = { 1, 1 };

	std::cout << "Введите число: ";
	std::cin >> num;

	int num_back = num_fibonach(num, vec_num);
	print(vec_num, num_back);

	return 0;
}
