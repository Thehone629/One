#include "dog.h"
#include <iostream>

Dog::Dog()
{
	cout << "construct dog" << endl;
}

void Dog::wolf() {
	cout << "wolf" << endl;
}

int Dog::getAge() {
	return Dog::age;
}
