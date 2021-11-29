#include "InvalidValueException.h"

InvalidValueException::InvalidValueException(int value)
{
	this->value = value;
	message = "�������� " + std::to_string(this->value) + " �� ���������!";
}

int InvalidValueException::getValue()
{
	return value;
}

std::string InvalidValueException::getMessage()
{
	return message;
}
