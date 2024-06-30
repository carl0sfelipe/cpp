# Nome do executável
NAME = phonebook

# Flags de compilação
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fontes
SRC = tests.cpp Account.cpp

# Objetos
OBJ = $(SRC:.cpp=.o)

# Regra padrão
all: $(NAME)

# Regra para compilar o executável
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar os arquivos objeto
%.o: %.cpp Account.hpp
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
