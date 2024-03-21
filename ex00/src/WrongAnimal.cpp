#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	setType("WrongAnimal");
	std::cout << "An [" << getType()
	<< "] Constructor was called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "An [" << getType()
	<< "] Destructor was called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other) {
	type = other.type;
	std::cout << "An [" << getType()
	<< "] copy constructor was called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other) {
	if (this != &other)
	{
		type = other.type;
		std::cout << "An [" << getType()
		<< "] copy assigment operator was called." << std::endl;
	}
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "An [" << getType()
	<< "] makes no sound." << std::endl;
}

std::string WrongAnimal::getType () const {
	return type;
}

void WrongAnimal::setType(std::string typyOfWrongAnimal) {
	type = typyOfWrongAnimal;
}
