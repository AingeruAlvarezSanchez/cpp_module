NAME = RPN

FILES = main.cpp \
		RPN.cpp

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -fsanitize=address -g3

.SILENT:

$(NAME): all
	echo "Use:\n	- ./RPN \"arguments\"\n	- ex: ./RPN \"1 2 + 3 4 - 5 6 * 7 8 /\""

all: main.o RPN.o
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) main.o RPN.o

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
