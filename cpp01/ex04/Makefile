#SHELL = /bin/zsh

NAME = Replace

CXX = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98 --pedantic

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) *.replace

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
