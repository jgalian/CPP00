#include "main.h"
#include "Phonebook.hpp"

Phonebook::Phonebook(short num) : index(num)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::incrementIndex(void)
{
	this->index = this->index + 1;
}

unsigned short Phonebook::getIndex(void) const
{
	return (this->index);
}

void Phonebook::setIndex()
{
	this->index = 0;
}
