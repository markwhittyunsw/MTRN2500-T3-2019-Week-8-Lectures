#include "GarbageMan.hpp"
#include <iostream>

GarbageMan::GarbageMan()
{
	bins = 0;
	garbageEfficiency = .75;
}

void GarbageMan::Eat() 
{
	std::cout << "Leftovers" << std::endl;
}
void GarbageMan::Sneeze()
{
	std::cout << "Aaaatchoooo" << std::endl;
}