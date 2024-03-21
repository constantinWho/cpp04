#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "./Animal.hpp"

class Dog : public Animal {

	public:
		// Constructors and Destructor
		Dog();
		Dog( const Dog& other );
		Dog& operator=( const Dog& other);
		~Dog();

		// Action
		void makeSound() const;
};

#endif
