#include "../inc/Dog.hpp"

Dog::Dog() {
	setType("Dog");
	std::cout << "A [" << getType()
	<< "] Constructor was called." << std::endl;
}

Dog::~Dog() {
	std::cout << "A [" << getType()
	<< "] Destructor was called." << std::endl;
	setType("Animal");
}

Dog::Dog( const Dog& other) {
	type = other.type;
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
