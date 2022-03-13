# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdragomi <vdragomi@students.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 15:54:50 by vdragomi          #+#    #+#              #
#    Updated: 2022/03/10 17:05:44 by vdragomi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME		= tests

SRC			= tests.cpp Account.cpp

OBJ			= ${SRC:.cpp=.o}

TESTOUT		= 19920104_091532.log

MYOUT		= my.log

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

test: 		all
			./$(NAME) | cut -c18- > $(MYOUT)
			cut -c18- $(TESTOUT) | diff $(MYOUT)

.PHONY: all clean fclean re