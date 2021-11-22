#ifndef __CONTACT__H__
#define __CONTACT__H__

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
		void hello();

	private :
		char	*darkest_secret;
};

#endif  //!__CONTACT__H__