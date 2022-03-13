/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bookfacer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:14:21 by vdragomi          #+#    #+#             */
/*   Updated: 2022/03/04 13:22:05 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef BOOKFACER_HPP
# define BOOKFACER_HPP

#include "Contacts.hpp"

class Bookfacer{
	private:
		Contact	contacts[8];
		size_t		index;
	public:
		Bookfacer(void);
		void	set_contact(Contact contact);
		Contact get_contact(size_t index);
		Contact	create_contact(void);
		void	update_index(void);
		void	putcontIndex(int i, char sep, int width);
		void	putbook();
		int		get_index(void)
		{
			return index;
		}
		~Bookfacer(void);
};

#endif