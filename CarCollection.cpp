#include "CarCollection.h"
#include "NotInitializedException.h"
#include <iostream>

void CarCollection::showAll()
{
	for (auto car : cars)
	{
		std::cout << car << std::endl;
	}
}

void CarCollection::findAndDisplay(std::string model)
{
	for (Car& car : cars)
	{
		if (strcmp(car.getModel().c_str(), model.c_str()) == 0)
		{
			std::cout << car << std::endl;
		}
	}
}

void CarCollection::findAndDisplay(int powerFrom, int powerTo)
{
	for (Car& car : cars)
	{
		try
		{
			if (car.getPower() >= powerFrom && car.getPower() <= powerTo)
			{
				std::cout << car << std::endl;
			}
		}
		catch (NotInitializedException& ex) {
			std::cout << "Зловлено помилку: " << ex.getMessage() << std::endl;
		}
	}
}

void CarCollection::add(Car& car)
{
	cars.push_back(car);
}
