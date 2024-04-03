#include "../inc/Cat.hpp"

Cat::Cat() {
	setType("Cat");
	std::cout << "A [" << getType()
	<< "] Constructor was called." << std::endl;
	try {
		_brain = new Brain();
	}
	catch (const std::bad_alloc& message) {
		std::cout << "No 🧠 for Cat: " << message.what() << std::endl;
	}
	for (int i = 0; i < 100; i++) {
		_brain->setIdea(i, "+++[Cat] Oh, look!!! Idea from ", getType());
	}
}

Cat::~Cat() {
	std::cout << "A [" << getType()
	<< "] Destructor was called." << std::endl;
	setType("Animal");
	delete _brain;
}

Cat::Cat(const Cat& other) {
	setType(other.getType() + "_Copy");
	std::cout << "A [" << getType() << "] copy constructor was called." << std::endl;

	try {
		_brain = new Brain(*other._brain);
	} catch (const std::bad_alloc& message) {
		std::cout << "No 🧠 for Cat: " << message.what() << std::endl;
	}
	for (int i = 0; i < 100; i++) {
		_brain->setIdea(i, "+++[Copy]____ Oh, look!!! Idea from ", getType());
	}
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		setType(other.getType() + "_CopyAss");
		delete _brain;
		try {
			_brain = new Brain(*other._brain);
		} catch (const std::bad_alloc& message) {
			std::cout << "No 🧠 for Cat: " << message.what() << std::endl;
		}
		std::cout << "A [" << getType() << "] copy assignment operator was called." << std::endl;
		for (int i = 0; i < 100; i++) {
			_brain->setIdea(i, "+++[CopyAss] Oh, look!!! Idea from ", getType());
		}
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "A [" << getType()
	<< "] makes: Miau, Miau! 🐱" << std::endl;
}

std::string	Cat::getIdeaFromBrain(int index) const {
	return _brain->getIdea(index);
}
