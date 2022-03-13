/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:53:10 by vdragomi          #+#    #+#             */
/*   Updated: 2022/03/10 16:25:24 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Bookfacer.hpp"
#include "Contacts.hpp"

int ft_bookface_request()
{
	std::string	input;
	int			request;

	request = 3;
	std::cout << "==========================================================\n";
	std::cout << "PLEASE INPUT YOUR REQUEST\n";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(1);
	else
	{
		if (input == "ADD")
			request = 1;
		else if (input == "SEARCH")
			request = 2;
		else if (input == "EXIT")
			exit(0);
	}
	return (request);
}

int ft_search_request(void)
{
	std::string input;
	long index;

	input = "";
	index = 0;
	while (1)
	{
		std::cout << "Please input the index you wish to search for:\n";
		getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		else
		{
			index = input.compare("0");
			if (index < 1 || index > 8)
			{
				std::cout << "Please input a valid number, from 1 to 8\n";
				continue;
			}
			else
				break;
		}
	}
	return (index);
}

int main(void)
{
	int request;
	Bookfacer Bookface;

	while(1)
	{
		request  = ft_bookface_request();
		switch (request)
		{
			case 1:
				Bookface.set_contact(Bookface.create_contact());
				Bookface.update_index();
				break;
			case 2:
				Bookface.putbook();
				request = ft_search_request();
				Bookface.get_contact(request - 1).printshorter('|', 10);
				break;
			case 3:
				std::cout << "Please input a valid request! ADD / SEARCH or EXIT are the options you are looking for.\n";
				break;
		}
	}
}