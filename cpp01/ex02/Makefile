#SHELL = /bin/zsh
NAME = Brains

CXX = clang++
FLAGS = -Wall -Werror -Wextra -g3 -std=c++98 --pedantic

SRCS =	main.cpp

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