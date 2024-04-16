#include "../inc/AnimalBase.hpp"

AnimalBase::AnimalBase() {
	setType("AnimalBase");
	std::cout << "An [" << getType()
	<< "] Constructor was called." << std::endl;
}

AnimalBase::~AnimalBase() {
	std::cout << "An [" << getType()
	<< "] Destructor was called." << std::endl;
}

AnimalBase::AnimalBase( const AnimalBase& other) {
	type = other.type;
	std::cout << "An [" << getType()
	<< "] copy constructor was called." << std::endl;
}

AnimalBase& AnimalBase::operator=( const AnimalBase& other) {
	if (this != &other)
	{
		type = other.type;
		std::cout << "An [" << getType()
		<< "] copy assigment operator was called." << std::endl;
	}
	return *this;
}

std::string AnimalBase::getType () const {
	return type;
}

void AnimalBase::setType(std::string type_of_animalBase) {
	type = type_of_animalBase;
}
