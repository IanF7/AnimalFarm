#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal
{
private:
	string name;
	double weight, height;
public:
	Animal();
	Animal(string name, double height, double weight);
	void eat();
	string getName() const;
	void setName(string name);
	double getHeight() const;
	void setHeight(double height);
	double getWeight() const;
	void setWeight(double weight);
	void gainWeight();

};
#endif
