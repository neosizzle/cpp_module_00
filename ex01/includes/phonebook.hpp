#include <iostream>

class Contact
{
	public :
		char	*first_name;
		char	*last_name;
		char	*phone_number;

		/*
		**Consrtuctors
		*/
		Contact(char *first_name, char *last_name, char *phone_number, char *darkest_secret)
		{
			first_name = first_name;
			last_name = last_name;
			phone_number = phone_number;
			darkest_secret = darkest_secret;
		}
	
		Contact()
		{
			first_name = (char*)"";
			last_name = (char*)"";
			phone_number = (char*)"";
			darkest_secret = (char*)"";
		}

	private :
		char	*darkest_secret;
};

class Phonebook
{
	public :
		int		total_contacts;
		Contact	contacts[8];

		/*
		** Constructors
		*/
		Phonebook()
		{
			total_contacts = 0;
		}
};