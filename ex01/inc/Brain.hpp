#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {

	private:
		std::string ideas[100];

	public:
		// Constructors and Destructor
		Brain();
		Brain( const Brain& other );
		Brain& operator=( const Brain& other);
		~Brain();
};

#endif
