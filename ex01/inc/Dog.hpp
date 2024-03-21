#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "./Animal.hpp"
# include "./Brain.hpp"

class Dog : public Animal {

	private:
		Brain* brain;
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
