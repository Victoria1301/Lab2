#pragma once
#include <iostream>
#include "ellipse.h"
namespace menu {
	template<class T>
	void print(T s) {
		std::cout << s << std::endl;
	}
	template <class T>
	int input(T& s) {
		int k = 0;
		do {
			std::cin >> s;
			if (std::cin.eof()) {
				std::cin.clear();
				return -1;
			}
			if (!std::cin.good()) {
				std::cin.clear();
				while (std::cin.get() != '\n');
				k++;
			}
			else k = 0;
		} while (k);
		return k;
	}
	int dialog();
	void menu_ellipse(int, Prog2::ellipse&);
}

