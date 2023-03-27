#ifndef BARN_H
#define BARN_H

#include <iostream>
#include <vector>
#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Horse.h"

using namespace std;

class Barn 
{
private:
	vector<Chicken> coop;
	vector<Cow> pen;
	vector<Horse> stalls;
public:
	Barn();
	void feedChicken();
	void feedCow();
	void feedHorse();

};

#endif
