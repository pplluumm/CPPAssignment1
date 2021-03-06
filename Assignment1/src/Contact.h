/*
 * Person.h
 *
 *  Created on: Oct 2, 2017
 *      Author: Betcher
 */

#ifndef CONTACT_H_
#define CONTACT_H_
#include <vector>
#include <string>


class Contact
{
		std::string firstName;
		std::string lastName;
		std::string phoneNumber;

	public:
		Contact();
		Contact(std::string);
		Contact(std::string, std::string);
		Contact(std::string, std::string, std::string);
		std::string getName();
		std::string getPhoneNumber();
		friend bool operator==(const Contact&, const Contact&);
		void print();
		~Contact();

};

#endif /* CONTACT_H_ */
