
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SOURCES = ft_bzero.c \
	ft_strchr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strcspn.c \
	ft_strequ.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_strreplace.c \
	ft_strsep.c \
	ft_sqrt.c \
	ft_countsetbits.c \
	ft_strspn.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@ ar rc $(NAME) $(OBJECTS)
	@ echo "make done"

clean:
	@ rm -f $(OBJECTS)
	@ echo "clean objects"

fclean: clean
	@ rm -f $(NAME) a.out
	@ echo "clean bin"

re: fclean all

.PHONY: all clean fclean re
.SILENT: $(OBJECTS)
