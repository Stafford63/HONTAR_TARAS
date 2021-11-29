#include "InvalidValueException.h"

InvalidValueException::InvalidValueException(int value)
{
	this->value = value;
	message = "Значення " + std::to_string(this->value) + " не допустиме!";
}

int InvalidValueException::getValue()
{
	return value;
}

std::string InvalidValueException::getMessage()
{
	return message;
}
