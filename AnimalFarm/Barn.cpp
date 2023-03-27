//this is my own work
#include <iostream>
#include "Barn.h"

using namespace std;

//barn constructor which creates elements for coop, pen, and stalls vectors
Barn::Barn()
{
	coop.push_back(Chicken("Cluck", 1, 5));
	coop.push_back(Chicken("Phil", 0.9, 4));
	coop.push_back(Chicken("Jimmy", 0.3, 2));
	pen.push_back(Cow("Angus", 5.5, 1000));
	pen.push_back(Cow("Joe", 5.2, 1010));
	pen.push_back(Cow("Bob", 5.7, 1502));
	pen.push_back(Cow("Jeff", 5.31, 1391));
	stalls.push_back(Horse("Neigh", 6, 800));
	stalls.push_back(Horse("Marty", 5.8, 900));
}

//feedChicken function
void Barn::feedChicken()
{
	//prints out that the chickens are being fed
	cout << "Feeding the chickens: " << endl;
	//runs a for loop to feed each chicken in the coop
	for (int i = 0; i < coop.size(); i++)
	{
		coop[i].eat();
	}
	cout << "" << endl;
}

//feedCow function
void Barn::feedCow()
{
	//prints out that the cows are being fed
	cout << "Feeding the cows: " << endl;
	//runs a for loop to feed each cow in the pen
	for (int i = 0; i < pen.size(); i++)
	{
		pen[i].eat();
	}
	cout << "" << endl;
}

//feedHorses function
void Barn::feedHorse()
{
	//prints out that the horses are being fed
	cout << "Feeding the horses: " << endl;
	//runs a for loop to feed each horse in the stall
	for (int i = 0; i < stalls.size(); i++)
	{
		stalls[i].eat();
	}
	cout << "" << endl;
}
