#include<iostream>
#include "Fraction.h"
#include <string>



int main() {
	setlocale(LC_ALL, "Russian");
	Fraction F1(3, 4);
	Fraction F2(5, 6);
	

	std::cout << F1.getNumerator() << F1.getDenominator() << std::endl;

	
	std::cout << F1.operator*(F2) << std::endl;
	std::cout << F1.operator/(F2) << std::endl;
	std::cout << F1.operator+(F2) << std::endl;
	std::cout << F1.operator-(F2) << std::endl;









	return 0;
}