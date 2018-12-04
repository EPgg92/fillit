# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vasalome <vasalome@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/11/26 17:27:09 by vasalome     #+#   ##    ##    #+#        #
#    Updated: 2018/12/04 14:32:39 by vasalome    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME		=	fillit

#	Compiler:
CFLAGS		=	-Wall -Wextra -Werror -I

#	Sources:
SRCS		=	ft_main.c
SRCS		+=	ft_parser.c
SRCS		+=	ft_solver.c
SRCS		+=	ft_printer.c
SRCS		+=	ft_init.c
SRCS		+=	ft_usage.c
SRCS		+=	ft_error.c
SRCS		+=	ft_transform.c
SRCS		+=	ft_strcpy.c
SRCS		+=	ft_strcspn.c
SRCS		+=	ft_strchr.c
SRCS		+=	ft_strlen.c
SRCS		+=	ft_strsep.c
SRCS		+=	ft_sqrt.c
SRCS		+=	ft_countsetbits.c

#	Objects:
OBJS			=	$(notdir $(SRCS:.c=.o))

#	Includes:
INC			=	fillit.h

all: $(NAME)

$(NAME): $(OBJS)
	@gcc $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.c fillit.h
	@$(CC) $(CFLAGS) -I $(INC) -c $<

clean:
	@/bin/rm -f $(OBJS) fillit.h.gch

fclean: clean
	@/bin/rm -f $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re
