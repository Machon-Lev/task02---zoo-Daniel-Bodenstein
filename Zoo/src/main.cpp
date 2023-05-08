// ZOO.cpp : Defines the entry point for the application.
//
#include<iostream>
#include "Location.h"
#include "Animal.h"
#include "Lion.h"
#include "Owl.h"
#include "Dog.h"
#include "Zoo.h"

using namespace std;

int main()
{
	srand(time(0));

	auto zoo = Zoo();
	zoo.run();

	return 0;
}
