//This is my own work
#include <iostream>
#include "Barn.h"

using namespace std;

int main()
{
	//creates ranch object of Barn class
	Barn ranch;
	//runs functions to feed all animals
	ranch.feedChicken();
	ranch.feedCow();
	ranch.feedHorse();
	return 0;
}