#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		// Constructors and Destructor
		WrongCat();
		WrongCat( const WrongCat& other );
		WrongCat& operator=( const WrongCat& other);
		~WrongCat();

		// Action
		void makeSound() const;
};

#endif
