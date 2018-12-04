# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vasalome <vasalome@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/11/26 17:27:09 by vasalome     #+#   ##    ##    #+#        #
#    Updated: 2018/11/30 18:51:10 by vasalome    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME		=	fillit

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	ft_main.c
SRCS		+=	ft_parser.c
SRCS		+=	ft_solver.c
SRCS		+=	ft_printer.c
SRCS		+=	ft_init.c
SRCS		+=	ft_usage.c
SRCS		+=	ft_error.c
SRCS		+=	ft_transform.c

OBJ			=	$(SRCS:.c=.o)

INC			=	fillit.h

LIBFT		=	libft/libft.a

RM			=	/bin/rm -f
RM_DIR		=	/bin/rm -rf

%.o:%.c $(INC)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

all: $(NAME)

make_libft:
	@make -C libft/

$(NAME): $(OBJ) %.o  make_libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

clean:
	@$(RM_DIR) $(OBJ)
	@$(MAKE) clean -C libft/

fclean: clean
	@$(RM) $(NAME) a.out
	@$(MAKE) fclean -C libft/

re: fclean all

#.SILENT: $(OBJ)
.PHONY: all clean fclean re make_libft
