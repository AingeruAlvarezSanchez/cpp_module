#SHELL = /bin/bash

NAME = FixedPointClass

CXX = clang++
FLAGS = -g -Wall -Werror -Wextra -std=c++98 --pedantic

SRCS = main.cpp	\
       Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

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
