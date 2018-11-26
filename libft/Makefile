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

##						##
##	|	VARIABLES	|	##
##						##

#	Output:
NAME		=	libft.a

#	Compiler:
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

#	Directory:
SRCS_DIR	=	./srcs/
OBJ_DIR		=	./objs_libft/
INC_DIR		=	./includes/

#	Sources:
SRCS		=	ft_bzero.c
SRCS		+=	ft_strchr.c
SRCS		+=	ft_strcmp.c
SRCS		+=	ft_strcpy.c
SRCS		+=	ft_strcspn.c
SRCS		+=	ft_strequ.c
SRCS		+=	ft_strlen.c
SRCS		+=	ft_strrchr.c
SRCS		+=	ft_strreplace.c
SRCS		+=	ft_strsep.c
SRCS		+=	ft_sqrt.c	
SRCS		+=	ft_countsetbits.c
SRCS		+=	ft_strspn.c

#	Objects:
OBJ			=	$(addprefix $(OBJ_DIR),$(SRCS:.c=.o))

#	Includes:
INC			=	$(addprefix -I,$(INC_DIR))

#	Cleaning:
RM			=	/bin/rm -f
RM_DIR		=	/bin/rm -rf

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
UNDERLINE	=	\033[4m
R_UNDERLINE	=	\033[24m


##					##
##	|	RULES	|	##
##					##

$(OBJ_DIR)%.o:$(SRCS_DIR)%.c $(INC_DIR)*.h
	@printf "$(_PINK)$(BOLD)[CC] $(R_BOLD)$(_YELLOW)$(<:.c=)...$(_STOP)"
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
	@printf "\r                                             \r"

all:
	@echo "$(_ORANGE)		LIBFT:		$(BOLD)OBJECTS DIRECTORY: CREATION | ->$(R_BOLD)$(_STOP)"
	@mkdir -p $(OBJ_DIR)
	@echo "$(_GREEN)				[FINISH]$(_STOP)\n"
	@$(MAKE) $(NAME) --no-print-directory

$(NAME): $(OBJ)
	@echo "$(_ORANGE)		LIBFT:		$(BOLD)COMPILATION $(NAME) | ->$(R_BOLD)$(_STOP)"
	@ar ruc $@ $^
	@echo "$(_GREEN)				[FINISH]$(_STOP)\n"
	@echo "$(_ORANGE)		LIBFT:		$(BOLD)OPTIMISATION $(NAME) | ->$(R_BOLD)$(_STOP)"
	@ranlib $(NAME)
	@echo "$(_GREEN)				[FINISH]$(_STOP)\n"

clean:
	@echo "$(_ORANGE)		LIBFT:		$(BOLD)DELETING OBJECTS | ->$(R_BOLD)$(_STOP)"
	@$(RM_DIR) $(OBJ_DIR)
	@echo "$(_GREEN)				[FINISH]$(_STOP)\n"

fclean: clean
	@echo "$(_ORANGE)		LIBFT:		$(BOLD)DELETING LIBRARY | ->$(R_BOLD)$(_STOP)"
	@$(RM) $(NAME)
	@echo "$(_GREEN)				[FINISH]$(_STOP)\n"

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory


#.SILENT: $(OBJ)
#.PRECIOUS:
.PHONY: all clean fclean re norm pause libclean
