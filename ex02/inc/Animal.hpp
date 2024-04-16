#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>


class Animal {

	protected:
		std::string	type;

	public:
		// Constructors and Destructor
		Animal();
		Animal( const Animal& other );
		Animal& operator=( const Animal& other);
		virtual ~Animal();

		// Action
		virtual void makeSound() const;

		// Getter
		std::string getType() const;
		virtual std::string getIdeaFromBrain(int ideaNumber) const;

		// Setter
		void setType(std::string type);
};

#endif
