#include <iostream>
#include <sstream>
#include "Contact.hpp"
#include "Phonebook.hpp"

std::string ft_itoa(int i)
{
	std::string s;
	std::stringstream out;

	out << i;
	s = out.str();
	return s;
}

int	ft_strlen(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return i;
}

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

void	display_property(std::string str, int length)
{
	int	len;
	int	temp;

	len = ft_strlen(str);
	if (len <= length)
	{
		temp = len;
		while (length - temp++ > 0)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		temp = -1;
		while (++temp < length - 1)
			std::cout << str[temp];
		std::cout << ".";
	}
	
}

void	list_contacts(Contact *contacts)
{
	int			i;
	std::string	str_idx;

	i = -1;
	/*
	Print headers
	*/
	std::cout << "|     index|";
	std::cout << "first_name|";
	std::cout << " last_name|";
	std::cout << "  nickname|"<< std::endl;

	while (++i < 8)
	{
		str_idx = ft_itoa(i);
		std::cout << "|";
		display_property(str_idx, 10);
		std::cout << "|";
		display_property(contacts[i].first_name, 10);
		std::cout << "|";
		display_property(contacts[i].last_name, 10);
		std::cout << "|";
		display_property(contacts[i].nickname, 10);
		std::cout << "|";

		std::cout << std::endl;
	}
	
}

void	Phonebook::search()
{
	list_contacts(contacts);
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

	//create contact object
	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	contacts[(total_contacts)++ % 8] = contact;
	std::cout << "Contact Added !" << std::endl;
}