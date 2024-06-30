# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 16:35:59 by dioda-si          #+#    #+#              #
#    Updated: 2023/08/10 16:44:54 by dioda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= c++
RM		= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= ClapTrap.cpp main.cpp
NAME		= claptrap

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

r: all
	@./$(NAME)

.PHONY: all clean fclean re r
