// ClassInheritance.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "Person.hpp"
#include "CEO.hpp"
#include "Batman.hpp"
#include "GarbageMan.hpp"
#include <iostream>
using namespace std;

int main()
{
	Person dude(10, 5, "MW");
	cout << dude.GetName() << endl;

	dude.SetName("Mark Whitty");
	cout << dude.GetName() << endl;

	CEO theBoss;

	cout << " I am a CEO "  << endl;
	theBoss.Eat();

	cout << theBoss.GetName() << endl;

	theBoss.SetName("Bill Gates");
	

	cout << theBoss.GetName() << endl;

	Batman superMark;
	cout << "superMark's name is " << superMark.GetName() << " ... lol" << endl;
	superMark.SetName("Steve Jobs");
	cout << "superMark's name is now " << superMark.GetName() << endl;

	GarbageMan jim;

	cout << "jim the garbage man is named: " << jim.GetName() << endl;
	jim.SetName("jimbo");
	cout << "jim the garbage man is now named: " << jim.GetName() << endl;



	return 0;
}