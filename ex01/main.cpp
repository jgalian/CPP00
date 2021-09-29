/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalian- <jgalian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 08:59:01 by jgalian-          #+#    #+#             */
/*   Updated: 2021/09/29 09:57:03 by jgalian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(void)
{
	short	choice;

	Phonebook myPhonebook(-1);
	std::cout << "\n--- WELCOME TO THE AWESOME PHONEBOOK PROGRAM ---\n" << std::endl;
	while(TRUE)
	{
		showMenu();
		choice = readUserSelection();
		if (choice == 1)
			addContact(&myPhonebook);
		else if (choice == 2)
			searchContact(myPhonebook);
		else if (choice == 3)
			exitProgram();
	}
}

void showMenu(void)
{
	std::cout << "\t--------------------------------" << std::endl;
	std::cout << "\t CHOOSE ONE OPTION TO CONTINUE: " << std::endl;
	std::cout << "\t--------------------------------" << std::endl << std::endl;
	std::cout << "\t- Write   \"ADD\"    to add a new contact" << std::endl;
	std::cout << "\t- Write  \"SEARCH\"  to look for a contact" << std::endl;
	std::cout << "\t- Write   \"EXIT\"   to exit the program" << std::endl << std::endl;
	std::cout << "You have chosen...  ";
}

short readUserSelection(void)
{
	std::string	choice;

	std::cin >> choice;
	if (!choice.compare("ADD"))
		return (1);
	else if (!choice.compare("SEARCH"))
		return (2);
	else if (!choice.compare("EXIT"))
		return (3);
	else
		std::cout << "\nYou should write one of this words: ADD, SEARCH or EXIT\n\n";
	return (0);
}

void addContact(Phonebook *pMyPhonebook)
{
	std::string				str;
	unsigned long long int	num;
	unsigned short			index;

	pMyPhonebook->incrementIndex();
	index = pMyPhonebook->getIndex();
	if (index > NUM_CONTACTS - 1)
	{
		pMyPhonebook->setIndex();
		index = 0;
	}

	std::cout << "\n\t--------------------------\n";
	std::cout << "\t LET'S ADD A NEW CONTACT: \n";
	std::cout << "\t--------------------------" << std::endl;
	std::cin.ignore();

	std::cout << "\n- Write the  FIRST NAME  of the new contact: ";
	std::getline(std::cin, str);
	pMyPhonebook->contacts[index].addFirstName(str);

	std::cout << "- Write the  LAST NAME  of the new contact: ";
	std::getline(std::cin, str);
	pMyPhonebook->contacts[index].addLastName(str);

	std::cout << "- Write the  NICKNAME  of the new contact: ";
	std::getline(std::cin, str);
	pMyPhonebook->contacts[index].addNickname(str);

	std::cout << "- Write the  DARKEST SECRET  of the new contact: ";
	std::getline(std::cin, str);
	pMyPhonebook->contacts[index].addDarkestSecret(str);

	std::cout << "- Write the  PHONE NUMBER  of the new contact: ";
	std::cin>> num;
	if (num > 0 && num < 2147483648)
		pMyPhonebook->contacts[index].addPhoneNumber(num);
	else
	{
		std::cout << std::endl << "\t >> >> >> Incorrect phone number format << << <<" << std::endl << std::endl;
		return ;
	}
	std::cout << "\n\t---------------------------------------------------\n";
	std::cout << "\t WELL DONE! YOU HAVE FINISHED ADDING A NEW CONTACT\n";
	std::cout << "\t---------------------------------------------------\n" << std::endl;
}

void searchContact(Phonebook myPhonebook)
{
	unsigned short int	i;
	unsigned short int	j;
	unsigned short int	num;

	std::cout << std::endl;
	j = 0;
	i = 0;
	while (i < NUM_CONTACTS)
	{
		if (!myPhonebook.contacts[i].getFirstName().empty())
		{
			j++;
			std::cout << std::setw(10) << std::right << i + 1 << " | " \
			<< std::setw(10) << std::right << myPhonebook.contacts[i].getShortFirstName() << " | " \
			<< std::setw(10) << std::right << myPhonebook.contacts[i].getShortLastName() << " | " \
			<< std::setw(10) << std::right << myPhonebook.contacts[i].getShortNickname() << std::endl;
		}
		i++;
	}
	if (j == 0)
	{
		std::cout << "\t-----------------\n";
		std::cout << "\t NO CONTACTS YET";
		std::cout << "\n\t-----------------\n" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "Write the number of the contact you want to consult: ";
	std::cin >> num;
	std::cout << std::endl;
	if (num > 0 && num <= j)
	{
		std::cout << "\t- First name: \t\t" << myPhonebook.contacts[num - 1].getFirstName() << std::endl;
		std::cout << "\t- Last name: \t\t" << myPhonebook.contacts[num - 1].getLastName() << std::endl;
		std::cout << "\t- Nickname: \t\t" << myPhonebook.contacts[num - 1].getNickname() << std::endl;
		std::cout << "\t- Darkest secret: \t" << myPhonebook.contacts[num - 1].getDarkestSecret() << std::endl;
		std::cout << "\t- Phone number: \t" << myPhonebook.contacts[num - 1].getPhoneNumber() << std::endl << std::endl;
	}
	else
	{
		std::cout << "\t-----------------------------------------------\n";
		std::cout << "\t THAT CONTACT NUMBER DOESN'T EXIST OR IS EMPTY\n";
		std::cout << "\t-----------------------------------------------\n" << std::endl;
	}
}

int exitProgram(void)
{
	std::cout << "\n--- BYE. THANKS FOR USING THE AWESOME PHONEBOOK PROGRAM ---\n\n";
	exit(0);
}
