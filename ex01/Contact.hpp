#ifndef _CONTACTS_HPP_
# define _CONTACTS_HPP_

#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		void addFirstName(std::string name);
		std::string getFirstName() const;
		std::string getShortFirstName() const;
		void addLastName(std::string name);
		std::string getLastName() const;
		std::string getShortLastName() const;
		void addNickname(std::string name);
		std::string getNickname() const;
		std::string getShortNickname() const;
		void addDarkestSecret(std::string name);
		std::string getDarkestSecret() const;
		void addPhoneNumber(int num);
		int getPhoneNumber() const;

	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		unsigned int	phoneNumber;
		std::string		darkestSecret;
};

#endif
