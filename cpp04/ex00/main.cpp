#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << PURPLE << "\tC R E A T I N G" << RESET << std::endl;
	std::cout << "[ ---------- Creating Animals ---------- ]" << std::endl;
	Animal *a1 = new Animal();
	std::cout << std::endl;
	Animal *a2 = new Animal("RIGHT ANIMAL");

	std::cout << std::endl << "[ ---------- Creating Dogs ---------- ]" << std::endl;
	Animal *dog1 = new Dog();
	std::cout << std::endl;
	Animal *dog2 = new Dog("PITBULL");

	std::cout << std::endl << "[ ---------- Creating Cats ---------- ]" << std::endl;
	Animal *cat1 = new Cat();
	std::cout << std::endl;
	Animal *cat2 = new Cat("PERSA");

	std::cout << std::endl << "[ ---------- Creating WrongAnimal ---------- ]" << std::endl;
	WrongAnimal *wa1 = new WrongAnimal();
	std::cout << std::endl;
	WrongAnimal *wa2 = new WrongAnimal("ANIMAL ERRADO");

	std::cout << std::endl << "[ ---------- Creating WrongCat ---------- ]" << std::endl;
	WrongAnimal *wcat1 = new WrongCat();
	std::cout << std::endl;
	WrongAnimal *wcat2 = new WrongCat("GATO ERRADO");

	std::cout << std::endl << PURPLE << "\tM A K I N G - S O U N D" << RESET << std::endl;
	std::cout << "[ ---------- Animals making sound ---------- ]" << std::endl;
	a1->makeSound();
	a2->makeSound();

	std::cout << std::endl << "[ ---------- Dogs making sound ---------- ]" << std::endl;
	dog1->makeSound();
	dog2->makeSound();

	std::cout << std::endl << "[ ---------- Cats making sound ---------- ]" << std::endl;
	cat1->makeSound();
	cat2->makeSound();

	std::cout << std::endl << "[ ---------- WrongAnimal making sound ---------- ]" << std::endl;
	wa1->makeSound();
	wa2->makeSound();

	std::cout << std::endl << "[ ---------- WrongCat making sound ---------- ]" << std::endl;
	wcat1->makeSound();
	wcat2->makeSound();


	std::cout << PURPLE << std::endl << "\tD E S T R O Y I N G" << RESET << std::endl;
	std::cout << "[ ---------- Destroying Animals ---------- ]" << std::endl;
	delete a1;
	std::cout << std::endl;
	delete a2;
	
	std::cout << std::endl << "[ ---------- Destroying Dogs ---------- ]" << std::endl;
	delete dog1;
	std::cout << std::endl;
	delete dog2;
	
	std::cout << std::endl << "[ ---------- Destroying Cats ---------- ]" << RESET << std::endl;
	delete cat1;
	std::cout << std::endl;
	delete cat2;

	std::cout << "[ ---------- Destroying Wrong Animals ---------- ]" << std::endl;
	delete wa1;
	std::cout << std::endl;
	delete wa2;

	std::cout << "[ ---------- Destroying Wrong Cats ---------- ]" << std::endl;
	delete wcat1;
	std::cout << std::endl;
	delete wcat2;
	return (0);
}
