#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() {
	setType("WrongCat");
	std::cout << "A [" << getType()
	<< "] Constructor was called." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "A [" << getType()
	<< "] Destructor was called." << std::endl;
	setType("Animal");
}

WrongCat::WrongCat( const WrongCat& other) {
	type = other.type;
	std::cout << "A [" << getType()
	<< "] copy constructor was called." << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other) {
	if (this != &other)
	{
		type = other.type;
		std::cout << "A [" << getType()
		<< "] copy assigment operator was called." << std::endl;
	}
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "A [" << getType()
	<< "] makes: WrongMiau, WrongMiau! 🐯" << std::endl;
}
