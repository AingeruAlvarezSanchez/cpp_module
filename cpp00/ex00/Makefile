NAME = megaphone

CC = clang++
FLAGS = -Wall -Werror -Wextra -g3 -std=c++98 --pedantic
RM = /bin/rm -f

.SILENT:

all: $(NAME)

$(NAME): megaphone.o
	$(CC) $(FLAGS) $< -o $@

megaphone.o: megaphone.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) megaphone.o

fclean: clean
	$(RM) megaphone

re: fclean all

.PHONY: all clean fclean re