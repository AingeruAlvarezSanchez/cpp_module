#SHELL = /bin/zsh
NAME = Account

CXX = clang++
FLAGS = -Wall -Werror -Wextra -g3 -std=c++98 --pedantic

SRCS =	tests.cpp	\
		Account.cpp

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