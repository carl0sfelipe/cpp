#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main(void) {
	const int numDogs = 5;
	const int numCats = 5;

	Animal *animalArray[numDogs + numCats];

	for (int i = 0; i < numDogs; ++i) {
			animalArray[i] = new Dog();
	 }

	for (int i = numDogs; i < numDogs + numCats; ++i) {
		animalArray[i] = new Cat();
	}

	for (int i = 0; i < numDogs + numCats; ++i) {
		Brain &brain = animalArray[i]->getBrain();
	
		for (int j = 0; j < 100; ++j) {
			std::stringstream ss;
			ss << "I'm getting an idea " << j << " for animal " << i;
			std::string idea = ss.str();
			brain.setIdea(idea, j);
		}
	}

	std::cout << std::endl << "------------- " << std::endl;
	std::cout << "Printing some DOGS's ideas" << std::endl;
	std::cout << animalArray[0]->getBrain().getIdea(2) << std::endl;
	std::cout << animalArray[1]->getBrain().getIdea(18) << std::endl;
	std::cout << animalArray[2]->getBrain().getIdea(99) << std::endl;
	std::cout << animalArray[3]->getBrain().getIdea(10) << std::endl;
	std::cout << animalArray[4]->getBrain().getIdea(42) << std::endl;
	std::cout << std::endl << "------------- " << std::endl;
	std::cout << "Printing some CATS's ideas" << std::endl;
	std::cout << animalArray[5]->getBrain().getIdea(92) << std::endl;
	std::cout << animalArray[6]->getBrain().getIdea(73) << std::endl;
	std::cout << animalArray[7]->getBrain().getIdea(9) << std::endl;
	std::cout << animalArray[8]->getBrain().getIdea(20) << std::endl;
	std::cout << animalArray[9]->getBrain().getIdea(67) << std::endl;
	std::cout << std::endl << "------------- " << std::endl;

	for (int i = 0; i < numDogs + numCats; ++i) {
		delete animalArray[i];
	}

	std::cout << "Testing Shallow and Deep Copy" << std::endl;

	Dog *dog1 = new Dog();
	std::cout << std::endl << "------------- " << std::endl;
	Dog *dog2 = new Dog();
	std::cout << std::endl << "------------- " << std::endl;

	*dog1 = *dog2;
	std::cout << std::endl << "------------- " << std::endl;

	Dog *dog3 = new Dog();
	std::cout << std::endl << "------------- " << std::endl;
	Dog *dog4 = new Dog(*dog3);
	std::cout << std::endl << "------------- " << std::endl;

	delete (dog1);
	std::cout << std::endl << "------------- " << std::endl;
	delete (dog2);
	std::cout << std::endl << "------------- " << std::endl;
	delete (dog3);
	std::cout << std::endl << "------------- " << std::endl;
	delete (dog4);

	return (0);
}
