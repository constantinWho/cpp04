#include "./inc/Animal.hpp"
#include "./inc/Cat.hpp"
#include "./inc/Dog.hpp"


int main() {
    const Animal* j = new Cat();


    // Call the copy constructor explicitly
    const Cat* CatCopy = new Cat(*dynamic_cast<const Cat*>(j));

    std::cout << CatCopy->getIdeaFromBrain(5) << std::endl;
    std::cout << j->getIdeaFromBrain(5) << std::endl;


    delete j;
    delete CatCopy; // Remember to delete the dynamically allocated copy

    return 0;
}

int test()
{
	//const Animal* animal = new Animal();
	const Animal* j = new Dog();
	//const Animal* i = new Cat();
	//const Dog* dog__ = new Dog();

	const Animal* copy(j);

	std::cout << copy->getIdeaFromBrain(5)<< std::endl;
	//std::cout << j->getIdeaFromBrain(5)<< std::endl;
	//std::cout << animal->getIdeaFromBrain(5)<< std::endl;
	//std::cout << i->getIdeaFromBrain(5)<< std::endl;

/* 	delete animal;
	delete j;
	delete i; */
	delete j;

	return 0;
}
