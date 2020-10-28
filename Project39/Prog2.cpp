#include <iostream>
#include <limits>
#include "ellipse.h"
#include "menu.h"
using namespace menu;
using namespace Prog2;
int main(int argc, const char* argv[]) {
	ellipse  p;
	ellipse  p1[4];
	for (size_t i = 0; i < 3; i++) {
		std::cout << p1[i].getA() << "  " << std::endl;
	}
	p = p1[1];
    std::cout << p.getA(); 

	Prog2::ellipse c(1, 1, 1, 1);
	int q = 0;
	do {
		int  d = dialog();
		menu_ellipse(d, c);
		print("If you want to exit-enter 0, if you want to continue-enter any number:");
		input(q);
	} while (q);
	return 0;
}