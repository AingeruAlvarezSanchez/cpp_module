#SHELL = /bin/zsh

NAME = RPN

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

FILES = main.cpp			\
		RPN.cpp

all: $(NAME)

$(NAME): main.o RPN.o
		$(CXX) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp
		$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) main.o RPN.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

