#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

int	valid_name(std::string str)
{
	int	i;

	i = -1;

	while (str[++i])
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] == ' ')))
			return 0;
	if (i <= 0)
		return 0;
	return 1;
}

int	valid_number(std::string str)
{
	int	i;

	i = -1;

	while (str[++i])
		if (!(str[i] >= '0' && str[i] <= '9'))
			return 0;
	if (i <= 0)
		return 0;
	return 1;
}

void	Phonebook::search()
{
	std::cout << "contachs\n";
}

void	Phonebook::add()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "You are about to add a new contact!\n";
	while(1)
	{
		std::cout << "First name :";
		std::getline(std::cin, first_name);
		if (!valid_name(first_name))
			continue ;

		std::cout << "Last name :";
		std::getline(std::cin, last_name); 
		if (!valid_name(last_name))
			continue ;

		std::cout << "Nickname :";
		std::getline(std::cin, nickname); 

		std::cout << "Phone number :";
		std::getline(std::cin, phone_number);
		if (!valid_number(phone_number))
			continue ;

		std::cout << "Darkest secret :";
		std::getline(std::cin, darkest_secret);

		break ;
	}

}