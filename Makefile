SOURCE = main.c prompt.c

OBJECTS = $(SOURCE:.c=.o)

FLAGS = -Werror -Wall -Wextra

NAME = myshell

all: $(NAME)

$(NAME): $(SOURCE)
	make bonus -C ./libft
	$(CC) $(FLAGS) $(SOURCE) ./libft/libft.a -lreadline -o $(NAME)

clean:
	make clean -C ./libft
	rm -rf $(OBJECTS)

fclean: clean
	make fclean -C ./libft
	rm -rf $(NAME)

re: fclean all