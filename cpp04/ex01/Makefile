# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 16:03:19 by fbeatris          #+#    #+#              #
#    Updated: 2022/01/29 22:41:32 by fbeatris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex01

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(INCLUDES) Makefile
	$(CC) ${FLAGS} -o $@ -c $<

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re