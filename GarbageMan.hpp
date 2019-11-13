#pragma once

#include "Person.hpp"

class GarbageMan : public Person
{
	int bins;
	double garbageEfficiency;
public:
	GarbageMan();
	void Eat();
	virtual void Sneeze();
};