#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>


class WrongAnimal {

	protected:
		std::string	type;

	public:
		// Constructors and Destructor
		WrongAnimal();
		WrongAnimal( const WrongAnimal& other );
		WrongAnimal& operator=( const WrongAnimal& other);
		virtual ~WrongAnimal();

		// Action
		virtual void makeSound() const;

		// Getter
		std::string getType() const;

		// Setter
		void setType(std::string type);
};

#endif
