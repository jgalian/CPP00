#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

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
