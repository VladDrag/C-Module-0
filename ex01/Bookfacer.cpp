/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bookfacer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:14:23 by vdragomi          #+#    #+#             */
/*   Updated: 2022/03/04 13:19:59 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bookfacer.hpp"
#include <iomanip>
#include <stdlib.h>

Bookfacer::Bookfacer(void)
{
	index = 0;
}

void	Bookfacer::update_index(void)
{
	if (index == 7)
		index = 0;
	else
		index++;
}

Contact Bookfacer::get_contact(size_t index)
{
	return contacts[index];
}

void Bookfacer::putcontIndex(int i, char sep, int width)
{
	std::cout << std::setw(width) << i + 1;
	contacts[i].printshort(sep, width);
}

void Bookfacer::putbook()
{
	int width = 10;
	char sep = '|';
	int counter = 0;

	std::cout << std::setw(width) << "Index" << sep << std::setw(width)
			  << "First name" << sep << std::setw(width) << "Last name" << sep
			  << std::setw(width) << "Nickname" << sep << std::endl;
	while(counter < 8 && get_contact(counter).get_fname().size() != 0)
		counter++;
	for (int i = 0; i < counter; i++)
		putcontIndex(i, sep, width);
}
Contact	Bookfacer::create_contact(void)
{
	std::string fname;
	std::string lname;
	std::string nik;
	std::string numb;
	std::string secret;
	Contact contact;

	std::cout << "PLEASE INPUT THE FIRST NAME:\n";
	std::getline(std::cin, fname);
	if (std::cin.eof())
		exit(1);
	else
		contact.set_fname(fname);

	std::cout << "PLEASE INPUT THE LAST NAME:\n";
	std::getline(std::cin, lname);
	if (std::cin.eof())
		exit(1);
	else
		contact.set_lname(lname);

	std::cout << "PLEASE INPUT THE NICKNAME:\n";
	std::getline(std::cin, nik);
	if (std::cin.eof())
		exit(1);
	else
		contact.set_nick(nik);

	std::cout << "PLEASE INPUT THE NUMBER:\n";
	std::getline(std::cin, numb);
	if (std::cin.eof())
		exit(1);
	else
		contact.set_num(numb);

	std::cout << "PLEASE INPUT THE SECRET:\n";
	std::getline(std::cin, secret);
	if (std::cin.eof())
		exit(1);
	else
		contact.set_secret(secret);
	return contact;
}


void	Bookfacer::set_contact(Contact contact)
{
	// if (!contacts[index].get_fname().empty())
	// 	contacts[index].;
	contacts[index] = contact;
}

Bookfacer::~Bookfacer(void){
	return ;
}