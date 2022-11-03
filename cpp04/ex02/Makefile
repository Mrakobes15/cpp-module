# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 16:03:19 by fbeatris          #+#    #+#              #
#    Updated: 2022/01/28 19:29:09 by fbeatris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex02

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CC) ${FLAGS} -o $@ -c $<

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re