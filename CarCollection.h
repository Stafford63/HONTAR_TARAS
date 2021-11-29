#include "Car.h"
#include <vector>

#pragma once
class CarCollection
{
protected:
	std::vector<Car> cars;
public:
	void showAll();
	void findAndDisplay(std::string model);
	void findAndDisplay(int powerFrom, int powerTo);

	void add(Car& car);
};

