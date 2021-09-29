#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define NUM_CONTACTS 8

class Phonebook
{
	public:
		Phonebook(short num);
		~Phonebook();
		void incrementIndex();
		void setIndex();
		unsigned short getIndex() const;
		Contact contacts[NUM_CONTACTS];

	private:
		short	index;
};

#endif
