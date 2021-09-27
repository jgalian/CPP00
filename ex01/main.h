#ifndef _MAIN_H_
# define _MAIN_H_

# include <iostream>
# include <string>
# include <iomanip>

# include "Contact.hpp"
# include "Phonebook.hpp"

# define TRUE 1
# define FALSE 0

void showMenu(void);
short readUserSelection(void);
int exitProgram(void);
void addContact(Phonebook *pMyPhonebook);
void searchContact(Phonebook myPhonebook);

#endif
