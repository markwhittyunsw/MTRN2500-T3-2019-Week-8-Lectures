#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"

using namespace std;

int main()
{
	Point Centre(10.5, 9.76);
	
	cout << "[x,y] = [" << Centre.GetX() << ", " << Centre.GetY() << "]" << endl;
	
	std::cin.get();
	
	Circle C1(Centre, 10.0);

	cout << "Circle C1 parameters [x, y, r] are [" << C1.GetX() << ", " << C1.GetY() << ", " << C1.GetRadius() << "]" << endl << endl;
	
	std::cin.get();
	
	Circle C2(1, 2, 3);

	cout << "Circle C2 parameters [x, y, r] are [" << C2.GetX() << ", " << C2.GetY() << ", " << C2.GetRadius() << "]" << endl << endl;
	
	std::cin.get();
	return 0;

}

