/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:14:19 by vdragomi          #+#    #+#             */
/*   Updated: 2022/03/09 10:46:59 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

std::string	Contact::get_fname()
{
	return f_name;
}

std::string	Contact::get_lname()
{
	return l_name;
}

std::string	Contact::get_nick()
{
	return nick;
}

std::string	Contact::get_num()
{
	return num;
}

std::string Contact::field(std::string fld, int width)
{
	if ((int)fld.size() > width)
		return (fld.substr(0, width - 1) + ".");
	else
		return (std::string(width - fld.size(), ' ') + fld);
}


void Contact::printshort(char sep, int width)
{
	std::cout << sep << field(get_fname(), width) << sep << field(get_lname(), width)
			  << sep << field(get_nick(), width) << sep << std::endl;
}

void Contact::printshorter(char sep, int width)
{
	std::cout << "First name: " << field(get_fname(), width) << "\n";
	std::cout << " Last name: " << field(get_lname(), width) << "\n";
	std::cout << "  Nickname: " << field(get_nick(), width) << "\n";
	std::cout << "    Number: " << field(get_num(), width) << "\n";
	std::cout << "    Secret: " << field(get_secret(), width) << "\n";
}

std::string	Contact::get_secret()
{
	return darkest_secret;
}

void		Contact::set_fname(std::string fname)
{
	f_name = fname;
}

void		Contact::set_lname(std::string lname)
{
	l_name = lname;
}

void		Contact::set_nick(std::string nik)
{
	nick = nik;
}

void		Contact::set_num(std::string numb)
{
	num = numb;
}

void		Contact::set_secret(std::string secret)
{
	darkest_secret = secret;
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "DESTRUCTOR CALLED\n";
	return ;
}