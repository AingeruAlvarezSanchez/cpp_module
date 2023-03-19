NAME = btc

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

FILES = main.cpp \
		BitcoinExchange.cpp

OBJS = $(FILES:.cpp=.o)

$(NAME): all

all: main.o BitcoinExchange.o
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
