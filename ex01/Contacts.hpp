/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:41:30 by vdragomi          #+#    #+#             */
/*   Updated: 2022/03/04 10:57:58 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACTS_HPP
# define CONTACTS_HPP
#include <iostream>

class Contact{
	private:
		std::string f_name;
		std::string l_name;
		std::string nick;
		std::string num;
		std::string darkest_secret;
	public:
		Contact(void);
		std::string get_fname();
		std::string get_lname();
		std::string get_nick();
		std::string get_num();
		std::string get_secret();
		void		set_fname(std::string fname);
		void		set_lname(std::string lname);
		void		set_nick(std::string nik);
		void		set_num(std::string numb);
		void		set_secret(std::string secret);
		std::string field(std::string fld, int width);
		void 		printshort(char sep, int width);
		void 		printshorter(char sep, int width);
		~Contact(void);
};

#endif