#pragma once
#include <string>
#include <iostream>

class Car
{
protected:
	std::string model;
	std::string color;

	int power;
	int engineCapacity;
public:
	Car();
	~Car();

	int getPower();
	void setPower(int value);

	int getEngineCapacity();
	void setEngineCapacity(int value);

	std::string getModel();
	void setModel(std::string value);

	std::string getColor();
	void setColor(std::string value);

	friend Car& operator+=(Car& car, int incPower);
	friend std::basic_ostream<char, std::char_traits<char>>& operator<<(std::basic_ostream<char, std::char_traits<char>>& os, Car& car);
	friend std::basic_istream<char, std::char_traits<char>>& operator>>(std::basic_istream<char, std::char_traits<char>>& is, Car& car);
};