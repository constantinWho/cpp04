#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "./Animal.hpp"
# include "./AnimalBase.hpp"
# include "./Brain.hpp"

class Dog : public AnimalBase {

	private:
		Brain* _brain;
	public:
		// Constructors and Destructor
		Dog();
		Dog( const Dog& other );
		Dog& operator=( const Dog& other);
		~Dog();

		// Action
		void		makeSound() const;
		std::string	getIdeaFromBrain(int index) const;
};

#endif
