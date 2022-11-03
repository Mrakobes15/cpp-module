# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 11:27:57 by bchelste          #+#    #+#              #
#    Updated: 2022/01/18 11:32:08 by bchelste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex00

CFLAGS		= -Wall -Werror -Wextra -std=c++98

CC			= clang++

SRCS		= main.cpp 
				
HPPFLS		= whatever.hpp

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

%.o: %.cpp $(HPPFLS)
			$(CC) $(CFLAGS) $(OPTFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re