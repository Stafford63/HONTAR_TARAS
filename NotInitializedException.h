#pragma once
#include <string>
class NotInitializedException
{
protected:
	std::string message;
public:
	NotInitializedException();

	std::string getMessage();
};

