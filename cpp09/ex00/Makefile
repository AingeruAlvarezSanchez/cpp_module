#SHELL = /bin/zsh

NAME = btc

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

FILES = main.cpp			\
		BitcoinExchange.cpp

all: $(NAME)

$(NAME): main.o BitcoinExchange.o
		$(CXX) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp
		$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) main.o BitcoinExchange.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
