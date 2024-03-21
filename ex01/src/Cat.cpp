#include "../inc/Cat.hpp"

Cat::Cat() {
	setType("Cat");
	std::cout << "A [" << getType()
	<< "] Constructor was called." << std::endl;
	try {
		brain = new Brain();
	}
	catch (const std::bad_alloc& message) {
		std::cout << "No 🧠 for Cat: " << message.what() << std::endl;
	}
}

Cat::~Cat() {
	std::cout << "A [" << getType()
	<< "] Destructor was called." << std::endl;
	setType("Animal");
	delete brain;
}

Cat::Cat( const Cat& other) {
	type = other.type;
	brain = new Brain;
	std::cout << "A [" << getType()
	<< "] copy constructor was called." << std::endl;
}

Cat& Cat::operator=( const Cat& other) {
	if (this != &other)
	{
		type = other.type;
		std::cout << "A [" << getType()
		<< "] copy assigment operator was called." << std::endl;
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "A [" << getType()
	<< "] makes: Miau, Miau! 🐱" << std::endl;
}
