#SHELL = /bin/bash

NAME = Violence

CXX = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98 --pedantic

SRCS = main.cpp		\
       Weapon.cpp	\
       HumanA.cpp	\
       HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
