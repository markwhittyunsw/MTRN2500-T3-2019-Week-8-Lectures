#pragma once

#include <string>

using namespace std;

class Person
{
	double		weight;	// kgs
	int			age;
	string		name;
public:
	Person();
	Person(double w, int a, string n);

	string	GetName();

	void	SetName(string s);

	virtual void	Eat();
	void	Live();
	void 	Sneeze();

};