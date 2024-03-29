#include "../inc/Cat.hpp"

Cat::Cat() {
	setType("Cat");
	std::cout << "A [" << getType()
	<< "] Constructor was called." << std::endl;
}

Cat::~Cat() {
	std::cout << "A [" << getType()
	<< "] Destructor was called." << std::endl;
	setType("Animal");
}

Cat::Cat( const Cat& other) {
	type = other.type;
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
