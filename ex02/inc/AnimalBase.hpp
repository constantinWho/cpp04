#ifndef ANIMALBASE_HPP
# define ANIMALBASE_HPP

# include <iostream>
# include <string>


class AnimalBase {

	protected:
		std::string	type;

	public:
		// Constructors and Destructor

		AnimalBase();
		AnimalBase( const AnimalBase& other );
		AnimalBase& operator=( const AnimalBase& other);
		virtual ~AnimalBase();

		// Action
		virtual void makeSound() const = 0;

		// Getter
		std::string getType() const;
		virtual std::string getIdeaFromBrain(int ideaNumber) const = 0;

		// Setter
		void setType(std::string type);
};

#endif
