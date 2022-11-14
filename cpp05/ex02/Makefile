#SHELL = /bin/zsh

NAME = Bureaucrats

CXX = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98 --pedantic -Wno-shadow -Wshadow

FILES = main.cpp		\
		Bureaucrat.cpp	\
		Form.cpp

OBJS = $(FILES:.cpp=.o)

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
