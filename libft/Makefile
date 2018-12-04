# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vasalome <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/11/26 17:27:42 by vasalome     #+#   ##    ##    #+#        #
#    Updated: 2018/11/26 17:27:47 by vasalome    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

SRCS		+=	ft_strcpy.c
SRCS		+=	ft_strcspn.c
SRCS		+=	ft_strchr.c
SRCS		+=	ft_strlen.c
SRCS		+=	ft_strsep.c
SRCS		+=	ft_sqrt.c
SRCS		+=	ft_countsetbits.c

OBJ			=	$(SRCS:.c=.o)

INC			=	libft.h

%.o:%.c $(INC)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar ruc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

#.SILENT: $(OBJ)
.PHONY: all clean fclean re
