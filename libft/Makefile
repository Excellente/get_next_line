CC = gcc
NAME = libft.a
CFLAGS = -c -Wall -Wextra -Werror
SRC = ft_putchar.c ft_putnbr.c ft_strjoin.c ft_strlen.c ft_strclr.c ft_strcpy.c\
      ft_strdup.c
INC = ./include/
SRCDIR = ./src/
OBJDIR = ./obj/

OBJ = $(SRC:.c=.o)
SRCS = $(addprefix $(SRCDIR), $(SRC))
OBJS = $(addprefix $(OBJDIR), $(OBJ))

all: $(NAME)
	
$(NAME):
	$(CC) $(SRCS) $(CFLAGS) -I$(INC)
	mv $(OBJ) $(OBJDIR)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
