# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/26 16:31:37 by csiqueir          #+#    #+#              #
#    Updated: 2024/05/26 16:31:39 by csiqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do executável
NAME = zombie_horde

# Compilador e flags de compilação
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fontes e objetos
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

# Regra padrão
all: $(NAME)

# Regra para compilar o executável
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar os arquivos objeto
%.o: %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos objeto e executável
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Regra para recompilar tudo
re: fclean all

# Indica que "clean", "fclean" e "re" não são nomes de arquivos
.PHONY: all clean fclean re
