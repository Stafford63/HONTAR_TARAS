#include "NotInitializedException.h"

NotInitializedException::NotInitializedException()
{
	message = "�������� �� i�i�i��i������!";
}

std::string NotInitializedException::getMessage()
{
	return message;
}
