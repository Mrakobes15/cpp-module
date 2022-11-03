# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crendeha <crendeha@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 20:49:40 by crendeha          #+#    #+#              #
#    Updated: 2022/01/23 22:07:02 by crendeha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=		main
SRC_PATH		=		./
SRC 			= 		main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJ 			=		$(patsubst %.cpp,%.o,$(addprefix $(SRC_PATH),$(SRC)))
D_FILES 		=		$(patsubst %.cpp,%.d,$(addprefix $(SRC_PATH),$(SRC)))
STD 			=		-std=c++98
CFLAGS 			= 		-Wall -Wextra -Werror

all 			: 		$(NAME)

$(NAME)		 	:		$(OBJ)
						c++ $(CFLAGS) $(STD) $(OBJ) -o $(NAME)
						@echo "Everything compiled"

%.o 			: 		%.cpp
						c++ $(CFLAGS) $(STD) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean 			: 
						@rm -f $(OBJ) $(D_FILES)

fclean 			: 		clean
						@rm -f $(NAME)

re 				: 		fclean all

.PHONY			: 		all clean fclean re
