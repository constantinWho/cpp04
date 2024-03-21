#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "./Animal.hpp"

class Cat : public Animal {

	public:
		// Constructors and Destructor
		Cat();
		Cat( const Cat& other );
		Cat& operator=( const Cat& other);
		~Cat();

		// Action
		void makeSound() const;
};

#endif
