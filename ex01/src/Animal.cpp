#include "../inc/Animal.hpp"

Animal::Animal() {
	setType("Animal");
	std::cout << "An [" << getType()
	<< "] Constructor was called." << std::endl;
}

Animal::~Animal() {
	std::cout << "An [" << getType()
	<< "] Destructor was called." << std::endl;
}

Animal::Animal( const Animal& other) {
	type = other.type;
	std::cout << "An [" << getType()
	<< "] copy constructor was called." << std::endl;
}

Animal& Animal::operator=( const Animal& other) {
	if (this != &other)
	{
		type = other.type;
		std::cout << "An [" << getType()
		<< "] copy assigment operator was called." << std::endl;
	}
	return *this;
}

void Animal::makeSound() const{
	std::cout << "An [" << getType()
	<< "] makes no sound." << std::endl;
}

std::string Animal::getType () const {
	return type;
}

void Animal::setType(std::string type_of_animal) {
	type = type_of_animal;
}
