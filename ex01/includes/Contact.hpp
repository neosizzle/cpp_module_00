#ifndef __CONTACT__H__
#define __CONTACT__H__
#include <iostream>

class Contact
{
	public :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;

		/*
		**Consrtuctors
		*/
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
		{
			first_name = first_name;
			last_name = last_name;
			nickname = nickname;
			phone_number = phone_number;
			darkest_secret = darkest_secret;
		}
	
		Contact()
		{
			first_name = "";
			last_name = "";
			nickname = "";
			phone_number = "";
			darkest_secret = "";
		}

	private :
		std::string darkest_secret;
};

#endif  //!__CONTACT__H__