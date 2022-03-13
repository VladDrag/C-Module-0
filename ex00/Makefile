# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 10:36:59 by vdragomi          #+#    #+#              #
#    Updated: 2022/03/09 10:37:27 by vdragomi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

OBJS = ${SRCS:.cpp=.o}

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean	all

PHONY:	all clean fclean re
