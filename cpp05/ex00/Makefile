# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <greita@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 11:39:45 by greita            #+#    #+#              #
#    Updated: 2022/10/16 11:41:21 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ex00

GREEN = 	"\033[1;32m"
BREAK = 	"\033[0m"

SRC = 		main.cpp \
			Bureaucrat.cpp \

HEADERS =	Bureaucrat.hpp \

all: 		$(NAME)

$(NAME): 	Makefile $(SRC) $(HEADERS)
			@c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
			@echo $(GREEN)"Compile $(NAME) done!"$(BREAK)

re:			clean all

clean:
			@rm -f $(NAME)

run:		re
			@./$(NAME)

leaks:		re
			@leaks --atExit -- ./$(NAME)

.PHONY:		all re clean run leaks
