#include "../inc/Dog.hpp"

Dog::Dog() {
	setType("Dog");
	std::cout << "A [" << getType()
	<< "] Constructor was called." << std::endl;
	try {
		brain = new Brain();
	}
	catch (const std::bad_alloc& message) {
		std::cout << "No 🧠 for Dog: " << message.what() << std::endl;
	}
}

Dog::~Dog() {
	std::cout << "A [" << getType()
	<< "] Destructor was called." << std::endl;
	setType("Animal");
	delete brain;
}

Dog::Dog( const Dog& other) {
	type = other.type;
	brain = new Brain;
	std::cout << "A [" << getType()
	<< "] copy constructor was called." << std::endl;
}

Dog& Dog::operator=( const Dog& other) {
	if (this != &other)
	{
		type = other.type;
		std::cout << "A [" << getType()
		<< "] copy assigment operator was called." << std::endl;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "A [" << getType()
	<< "] makes: Woof, Woof! 🐕" << std::endl;
}
