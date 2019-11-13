// ClassInheritance.cpp : Defines the entry point for the console application.
//

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

	std::cin.get();
	
	CEO theBoss;

	cout << " I am a CEO "  << endl;
	theBoss.Eat();

	std::cin.get();

	cout << theBoss.GetName() << endl;

	theBoss.SetName("Bill Gates");
	

	cout << theBoss.GetName() << endl;

	std::cin.get();

	Batman superMark;
	cout << "superMark's name is " << superMark.GetName() << " ... lol" << endl;
	superMark.SetName("Steve Jobs");
	cout << "superMark's name is now " << superMark.GetName() << endl;

	std::cin.get();
	
	GarbageMan jim;
	jim.Eat();

	cout << "jim the garbage man is named: " << jim.GetName() << endl;
	jim.SetName("jimbo");
	cout << "jim the garbage man is now named: " << jim.GetName() << endl;

	std::cin.get();

	Person *p = &jim;
	p->Eat();
	GarbageMan *g = dynamic_cast<GarbageMan*>(&jim);
	g->Sneeze();
	g = &jim;
	g->Sneeze();
	return 0;
}