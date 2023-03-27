NAME = PmergeMe

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -fsanitize=address -g3

FILES = main.cpp \
		PmergeMe.cpp

OBJS = $(FILES:.cpp=.o)

$(NAME): all
	echo "Use:\n	- ./PmergeMe \arg1 arg2 arg3 ...\n	- ex: ./PmergeMe 3 1 2 ..."

all: main.o PmergeMe.o
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
