#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {

	private:
		std::string _ideas[100];

	public:
		// Constructors and Destructor
		Brain();
		Brain( const Brain& other );
		Brain& operator=( const Brain& other);
		~Brain();

		void		setIdea(int index, std::string idea, std::string typeOfAnimal);
		std::string	getIdea(int index) const;
};

#endif
