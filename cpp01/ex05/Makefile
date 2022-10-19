#SHELL = /bin/bash

NAME = Karen

CXX = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98 --pedantic

SRCS = main.cpp	\
       Karen.cpp

OBJS = $(SRCS:.cpp=.o)

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
