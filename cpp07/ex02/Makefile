# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 13:14:44 by bchelste          #+#    #+#              #
#    Updated: 2022/01/18 14:10:06 by bchelste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02

CFLAGS		= -Wall -Werror -Wextra -std=c++98

CC			= clang++

SRCS		= main.cpp 
				
HPPFLS		= Array.hpp

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