#include "./inc/AnimalBase.hpp"
#include "./inc/Animal.hpp"
#include "./inc/Cat.hpp"
#include "./inc/Dog.hpp"


int main()
{
	const AnimalBase* animals[8];
	const AnimalBase* copyAnimals[8];

	for (int i = 0; i < 8; i++) {
		std::cout << i <<")-------------------------------" << std::endl;
		if (i < 4)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
		std::cout << i << ")-------------------------------\n" << std::endl;
	}

	for (int i = 0; i < 8; i++) {
		std::cout << i <<")+++++++++++++++++++++++++++++++" << std::endl;
		animals[i]->makeSound();
		std::cout << i << ")+++++++++++++++++++++++++++++++\n" << std::endl;
	}

	for (int i = 0; i < 8; i++) {
		std::cout << i <<")+++++++++++++++++++++++++++++++" << std::endl;
		if (i < 4)
			copyAnimals[i] = new Dog(*dynamic_cast<const Dog*>(animals[i]));
		else
			copyAnimals[i] = new Cat(*dynamic_cast<const Cat*>(animals[i]));
		std::cout << "Animal idea: " << animals[i]->getIdeaFromBrain(i) << std::endl;
		std::cout << "CopyAnimal idea: " << copyAnimals[i]->getIdeaFromBrain(i) << std::endl;
		std::cout << i << ")+++++++++++++++++++++++++++++++\n" << std::endl;
	}

	for (int i = 0; i < 8; i++) {
		std::cout << i <<")-------------------------------" << std::endl;
		delete animals[i];
		std::cout << i << ")-------------------------------\n" << std::endl;
	}

	for (int i = 0; i < 8; i++) {
		std::cout << i <<")-------------------------------" << std::endl;
		delete copyAnimals[i];
		std::cout << i << ")-------------------------------\n" << std::endl;
	}
	return 0;
}
