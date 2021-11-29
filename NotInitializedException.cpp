#include "NotInitializedException.h"

NotInitializedException::NotInitializedException()
{
	message = "Значення не iнiцiалiзовано!";
}

std::string NotInitializedException::getMessage()
{
	return message;
}
