#include "Car.h"
#include "InvalidValueException.h"
#include "NotInitializedException.h"

Car::Car()
{
	model = "";
	color = "";

	power = -1;
	engineCapacity = -1;
}

Car::~Car()
{
}

int Car::getPower()
{
	if (power == -1)
		throw NotInitializedException();

	return power;
}

void Car::setPower(int value)
{
	if (value >= 0)
	{
		power = value;
	}
	else
	{
		throw InvalidValueException(value);
	}
}

int Car::getEngineCapacity()
{
	if (engineCapacity == -1)
		throw NotInitializedException();

	return engineCapacity;
}

void Car::setEngineCapacity(int value)
{
	if (value >= 0)
	{
		engineCapacity = value;
	}
	else
	{
		throw InvalidValueException(value);
	}
}

std::string Car::getModel()
{
	return model;
}

void Car::setModel(std::string value)
{
	model = value;
}

std::string Car::getColor()
{
	return color;
}

void Car::setColor(std::string value)
{
	color = value;
}

Car& operator+=(Car& car, int incPower)
{
	car.power += incPower;
	return car;
}

std::basic_ostream<char, std::char_traits<char>>& operator<<(std::basic_ostream<char, std::char_traits<char>>& os, Car& car)
{
	os << "Машина " << car.model << " (" << car.color << "): Потужнiсть = " << car.power << ", Об'єм двигуна = " << car.engineCapacity;

	return os;
}

std::basic_istream<char, std::char_traits<char>>& operator>>(std::basic_istream<char, std::char_traits<char>>& is, Car& car)
{
	std::string model;
	std::getline(is, model);
	car.setModel(model);

	return is;
}
