NAME = bsq
FILES = main.c square.c etc.c utils.c map.c

.PHONY: all clean fclean re

all:
	@gcc -Wall -Wextra -Werror -o $(NAME) $(FILES)

clean:
	@rm -f *.o

fclean: clean
	@rm bsq

re: fclean all
