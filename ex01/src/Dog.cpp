#include "../inc/Dog.hpp"

Dog::Dog() {
	setType("Dog");
	std::cout << "A [" << getType()
	<< "] Constructor was called." << std::endl;
	try {
		_brain = new Brain();
	}
	catch (const std::bad_alloc& message) {
		std::cout << "No 🧠 for Dog: " << message.what() << std::endl;
	}
	for (int i = 0; i < 100; i++) {
		_brain->setIdea(i, "____ Oh, look!!! Idea from ", getType());
	}
}

Dog::~Dog() {
	std::cout << "A [" << getType()
	<< "] Destructor was called." << std::endl;
	setType("Animal");
	delete _brain;
}

Dog::Dog(const Dog& other) {
	setType(other.getType() + "_Copy"); // Copy the type
	std::cout << "A [" << getType() << "] copy constructor was called." << std::endl;

	try {
		_brain = new Brain(*other._brain); // Create a deep copy of the Brain object
	} catch (const std::bad_alloc& message) {
		std::cout << "No 🧠 for Dog: " << message.what() << std::endl;
	}
	for (int i = 0; i < 100; i++) {
		_brain->setIdea(i, "Copy____ Oh, look!!! Idea from ", getType());
	}
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

std::string	Dog::getIdeaFromBrain(int index) const {
	return _brain->getIdea(index);
}
