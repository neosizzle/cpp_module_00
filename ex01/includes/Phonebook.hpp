#ifndef __PHONEBOOK__H__
#define __PHONEBOOK__H__

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
	public :
		int		total_contacts;
		Contact	contacts[8];

		/*
		** Methods
		*/
		void	search();
		void	add();

		/*
		** Constructors
		*/
		Phonebook();

};

#endif  //!__PHONEBOOK__H__