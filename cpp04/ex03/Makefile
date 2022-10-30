#SHELL = /bin/zsh

NAME = Materias

CXX = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98 --pedantic -Wno-shadow -Wshadow -g3

FILES =	main.cpp		\
		AMateria.cpp	\
		Ice.cpp			\
		Cure.cpp		\
		Character.cpp	\
		MateriaSource.cpp

OBJS = $(FILES:.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
