#SHELL = /bin/zsh

NAME = phonebook

CXX = clang++
FLAGS = -Wall -Werror -Wextra -g3 -std=c++98 --pedantic

SRCS =	main.cpp			\
		phonebook_class.cpp	\
		contact_class.cpp

OBJS = $(SRCS:.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $^ -o $@

#%.o: %.cpp
#	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re