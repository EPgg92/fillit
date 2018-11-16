# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vasalome <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/04 11:42:11 by vasalome     #+#   ##    ##    #+#        #
#    Updated: 2018/11/16 18:03:13 by vasalome    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #


##						##
##	|	VARIABLES	|	##
##						##

#	Output:
NAME	=	libft.a

#	Compiler:
CC		=	gcc
CCG		=	clang
CFLAGS	=	-Wall -Wextra -Werror# -ggdb -fsanitize=address
CSOFLAGS=	-shared -fPIC

#	Sources:
SRCS	=	ft_memset.c
SRCS	+=	ft_bzero.c
SRCS	+=	ft_memcpy.c
SRCS	+=	ft_memccpy.c
SRCS	+=	ft_memmove.c
SRCS	+=	ft_memchr.c
SRCS	+=	ft_memcmp.c
SRCS	+=	ft_strlen.c
SRCS	+=	ft_strdup.c
SRCS	+=	ft_strndup.c
SRCS	+=	ft_strcpy.c
SRCS	+=	ft_strncpy.c
SRCS	+=	ft_strcat.c
SRCS	+=	ft_strncat.c
SRCS	+=	ft_strlcat.c
SRCS	+=	ft_strchr.c
SRCS	+=	ft_strrchr.c
SRCS	+=	ft_strstr.c
SRCS	+=	ft_strnstr.c
SRCS	+=	ft_strcmp.c
SRCS	+=	ft_strncmp.c
SRCS	+=	ft_atoi.c
SRCS	+=	ft_isalpha.c
SRCS	+=	ft_isdigit.c
SRCS	+=	ft_isalnum.c
SRCS	+=	ft_isascii.c
SRCS	+=	ft_isprint.c
SRCS	+=	ft_toupper.c
SRCS	+=	ft_tolower.c
SRCS	+=	ft_memalloc.c
SRCS	+=	ft_memdel.c
SRCS	+=	ft_strnew.c
SRCS	+=	ft_strdel.c
SRCS	+=	ft_strclr.c
SRCS	+=	ft_striter.c
SRCS	+=	ft_striteri.c
SRCS	+=	ft_strmap.c
SRCS	+=	ft_strmapi.c
SRCS	+=	ft_strequ.c
SRCS	+=	ft_strnequ.c
SRCS	+=	ft_strsub.c
SRCS	+=	ft_strjoin.c
SRCS	+=	ft_strtrim.c
SRCS	+=	ft_strsplit.c
SRCS	+=	ft_itoa.c
SRCS	+=	ft_putchar.c
SRCS	+=	ft_putstr.c
SRCS	+=	ft_putendl.c
SRCS	+=	ft_putnbr.c
SRCS	+=	ft_putchar_fd.c
SRCS	+=	ft_putstr_fd.c
SRCS	+=	ft_putendl_fd.c
SRCS	+=	ft_putnbr_fd.c
SRCS	+=	ft_lstnew.c
SRCS	+=	ft_lstdelone.c
SRCS	+=	ft_lstdel.c
SRCS	+=	ft_lstadd.c
SRCS	+=	ft_lstiter.c
SRCS	+=	ft_lstmap.c
SRCS	+=	ft_swap.c
SRCS	+=	ft_strrev.c
SRCS	+=	ft_islower.c
SRCS	+=	ft_isupper.c
SRCS	+=	ft_strlwr.c
SRCS	+=	ft_strupr.c
SRCS	+=	ft_strcapitalize.c
SRCS	+=	ft_btree_create_node.c
SRCS	+=	ft_btree_apply_prefix.c
SRCS	+=	ft_btree_apply_infix.c
SRCS	+=	ft_btree_insert_data.c
SRCS	+=	get_next_line.c

#	Objects:
OBJ		=	$(notdir $(SRCS:.c=.o))

#	Includes:
INCDIR	=	./includes/

#	Librairies:
LIBDIR = 

#	Cleaning:
RM		=	/bin/rm -f

#	Colors:
_GREEN		=	\033[38;5;46m
_VIOLET		=	\033[38;5;141m
_RED		=	\033[38;5;1m
_CYAN		=	\033[38;5;45m
_ORANGE		=	\033[38;5;214m
_YELLOW		=	\033[38;5;220m
_PINK		=	\033[38;5;197m
_STOP		=	\033[0m

#	Fonts:
END			=	\033[0m
BOLD		=	\033[1m
R_BOLD		=	\033[21m
#BLINK		=	\033[5m
#R_BLINK		=	\033[25m
UNDERLINE	=	\033[4m
R_UNDERLINE	=	\033[24m
#HIDE		=	\033[8m
#R_HIDE		=	\033[28m

#	Norm 42:
NORM		=	norminette
NORMFLAGS	=	-r CheckForbiddenSourceHeader

#	Rappel des variables automatiques:
#	$@ : produit (ou but) de la règle
#	$< : nom de la première dépendance (ou source)
#	$? : toutes les dépendances plus récentes que le but
#	$^ : toutes les dépendances
#	$+ : idem mais chaque dépendance apparait autant de fois qu'elle est cité
#	et l'ordre d'apparition est conservé.


##					##
##	|	RULES	|	##
##					##

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(_ORANGE)LIBFT:		$(BOLD)COMPILATION...$(R_BOLD)$(_STOP)"
	@ar ruc $(NAME) $?
	@echo "$(_GREEN)		[OK]$(_STOP)"
	@echo "$(_ORANGE)LIBFT:		$(BOLD)OPTIMISATION...$(R_BOLD)$(_STOP)"
	@ranlib $(NAME)
	@echo "$(_GREEN)		[OK]$(_STOP)"

%.o: %.c libft.h
	@printf "[CC] $(<:.c=)..."
	@$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@
	@printf "\r                               \r"

clean:
	@echo "$(_ORANGE)LIBFT:		$(BOLD)DELETING OBJECTS...$(R_BOLD)$(_STOP)"
	@$(RM) $(OBJ)
	@echo "$(_GREEN)		[OK]$(_STOP)"

fclean: clean
	@echo "$(_ORANGE)LIBFT:		$(BOLD)DELETING LIBRARY...$(R_BOLD)$(_STOP)"
	@$(RM) $(NAME)
	@echo "$(_GREEN)		[OK]$(_STOP)"

libclean:
	@echo "$(_ORANGE)LIBFT:		$(BOLD)DELETING LIBRARY...$(R_BOLD)$(_STOP)"
	@$(RM) $(NAME)
	@echo "$(_GREEN)		[OK]$(_STOP)"

re: fclean all

norm:
	@$(NORM) $(NORMFLAGS)
	@echo "$(_PINK)$(BOLD)NORMINETTE:\n$(R_BOLD)$(_STOP)		$(_GREEN)[OK]!"

.SILENT: $(OBJ)
.PHONY: all clean fclean re norm pause libclean
