#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << "A [🧠🧠🧠] Constructor was called." << std::endl;
}

Brain::~Brain() {
	std::cout << "A [🧠🧠🧠] Destructor was called." << std::endl;
}

Brain::Brain( const Brain& other) {
	for (int i = 0; i < 100; i++) { ideas[i] = other.ideas[i]; }
	std::cout << "A [🧠🧠🧠] copy constructor was called." << std::endl;
}

Brain& Brain::operator=( const Brain& other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++) { ideas[i] = other.ideas[i]; }
		std::cout << "A [🧠🧠🧠] copy assigment operator was called." << std::endl;
	}
	return *this;
}

