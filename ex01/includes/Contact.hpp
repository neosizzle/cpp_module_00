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
		std::string darkest_secret;

		/*
		**Consrtuctors
		*/
		Contact(std::string f_n, std::string l_n, std::string nick, std::string p_n, std::string d_s)
		{
			first_name = f_n;
			last_name = l_n;
			nickname = nick;
			phone_number = p_n;
			darkest_secret = d_s;
		}
	
		Contact()
		{
			first_name = "";
			last_name = "";
			nickname = "";
			phone_number = "";
			darkest_secret = "";
		}

};

#endif  //!__CONTACT__H__