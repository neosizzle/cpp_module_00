#include "main.hpp"

void	initialize()
{
	std::cout << "Welcome to the phonebook, available comamnds are EXIT, SEARCH, ADD" << std::endl;
}

int	main()
{
	std::string	command;
	Phonebook phonebook;

	/*
	** Initialization and setup
	*/
	initialize();

	/*
	** Main process loop
	*/
	while (1)
	{
		std::cout << ">";
		std::getline(std::cin, command); 
		if (command.compare("EXIT") == 0)
			exit(0);
		else if (command.compare("SEARCH") == 0)
			phonebook.search();
		else if (command.compare("ADD") == 0)
			phonebook.add();
		else
			std::cout << "available comamnds are EXIT, SEARCH, ADD" << std::endl;
	}
	
	return 0;
}
