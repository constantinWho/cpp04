#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << "A [🧠🧠🧠] Constructor was called." << std::endl;
}

Brain::~Brain() {
	std::cout << "A [🧠🧠🧠] Destructor was called." << std::endl;
}

Brain::Brain( const Brain& other) {
	for (int i = 0; i < 100; i++) { _ideas[i] = other._ideas[i]; }
	std::cout << "A [🧠🧠🧠] copy constructor was called." << std::endl;
}

Brain& Brain::operator=( const Brain& other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++) { _ideas[i] = other._ideas[i]; }
		std::cout << "A [🧠🧠🧠] copy assigment operator was called." << std::endl;
	}
	return *this;
}

void	Brain::setIdea(int index, std::string idea, std::string typeOfAnimal) {
	std::stringstream	strStream;
	std::string			str;
	strStream << index;
	str = strStream.str();

	_ideas[index] = str + idea + typeOfAnimal;
}

std::string	Brain::getIdea(int index) const {
	return _ideas[index];
}
