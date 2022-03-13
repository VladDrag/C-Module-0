# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 13:08:04 by vdragomi          #+#    #+#              #
#    Updated: 2022/03/04 13:32:08 by vdragomi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = Bookfacer.cpp Contacts.cpp main.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

OBJS = ${SRCS:.cpp=.o}

all:	$(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean	all

PHONY:	all clean fclean re
