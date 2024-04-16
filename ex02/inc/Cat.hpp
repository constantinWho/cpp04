#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "./Animal.hpp"
# include "./AnimalBase.hpp"
# include "./Brain.hpp"

class Cat : public AnimalBase {

	private:
		Brain *_brain;
	public:
		// Constructors and Destructor
		Cat();
		Cat( const Cat& other );
		Cat& operator=( const Cat& other);
		~Cat();

		// Action
		void makeSound() const;
		std::string	getIdeaFromBrain(int index) const;
};

#endif
