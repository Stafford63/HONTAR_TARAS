#include <string>

#pragma once
class InvalidValueException
{
protected:
	int value;
	std::string message;
public:
	InvalidValueException(int value);

	int getValue();
	std::string getMessage();
};

