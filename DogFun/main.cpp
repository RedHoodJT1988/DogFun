#include <iostream>
#include <stdexcept>
#include "Dog.h"

int main()
{
	try
	{
		Dog myDog("German Shepard");
		Dog yourDog("Pomeranian");
		Dog theirDog("Poodle");

		cout << myDog.getBreed() << endl;
		cout << yourDog.getBreed() << endl;
		cout << theirDog.getBreed() << endl;
	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}