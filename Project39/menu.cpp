#include <stdio.h>
#include "ellipse.h"
#include "menu.h"
using namespace std;
namespace menu {
	int dialog() {
		std::cout << "  " << std::endl;
		print("What do you want to do?");
		print("[1] Enter your parameters");
		print("[2] Eccentricity");
		print("[3] Length");
		print("[4] Square");
		print("[5] Min distance");
		print("[6] Max distance");
		print("[7] Return y");
		print("[8] Focal distance");
		int d = 0;
		input(d);
		return d;
	} 
	void menu_ellipse(int d, Prog2::ellipse& c) {
		switch (d) {
		case 1: {
			Prog2::Point p;
			double a;
			double b;
			std::cout << "Enter new x, y, a, b " << std::endl;
			std::cin >> p.x >> p.y >> a >> b;
			if (std::cin.good()) {
				c.setP(p);
				try {
					c.setA(a);
				}
				catch (std::exception & ex) {
					std::cout << ex.what() << std::endl;
				}
				try {
					c.setB(b);
				}
				catch (std::exception & ex) {
					std::cout << ex.what() << std::endl;
				}
			}
			std::cin.clear();
			break;
		}
		case 2: {
			std::cout << "Eccentricity: " << c.eccentricity() << std::endl;
			break;
		}
		case 3: {
			std::cout << "Length: " << c.length() << std::endl;
			break;
		}
		case 4: {
			std::cout << "Square: " << c.square() << std::endl;
			break;
		}
		case 5: {
			std::cout << "Min distance: " << c.min_distance() << std::endl;
			break;
		}
		case 6: {
			std::cout << "Max distance: " << c.max_distance() << std::endl;
			break;
		}
		case 7: {
			std::cout << "Enter x" << std::endl;
			double a, b, x;
			Prog2::Point p1;
			input(x);
			try {
				p1.y = c.coordinate_y(x);
				std::cout << " y=" << p1.y << std::endl;
			}
			catch (std::exception & ex)
			{
				std::cout << ex.what() << std::endl;
			}
			std::cin.clear();
			break;
		}
		case 8: {
			std::cout << "Focal distance: " << c.focal_distance() << std::endl;
			break;
		}
		default: {
			print("Incorrect choice");
		}
		}
	}
}