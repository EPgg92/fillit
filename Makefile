# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vasalome <vasalome@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/11/26 17:27:09 by vasalome     #+#   ##    ##    #+#        #
#    Updated: 2018/11/28 17:53:51 by vasalome    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

##						##
##	|	VARIABLES	|	##
##						##

#	Output:
NAME		=	fillit

#	Compiler:
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

#	Directory:
SRCS_DIR	=	./sources/
OBJ_DIR		=	./objs_fillit/
INC_DIR		=	./includes/

#	Sources:
SRCS		=	ft_main.c
SRCS		+=	ft_parser.c
SRCS		+=	ft_solver.c
SRCS		+=	ft_printer.c
SRCS		+=	ft_init.c
SRCS		+=	ft_debug.c
SRCS		+=	ft_usage.c
SRCS		+=	ft_bitoperation.c
SRCS		+=	ft_error.c

#	Objects:
OBJ			=	$(addprefix $(OBJ_DIR),$(SRCS:.c=.o))

#	Includes:
INC			=	$(addprefix -I,$(INC_DIR))

#	Library:
LIBFT		=	libft/libft.a

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
BLINK		=	\033[5m
R_BLINK		=	\033[25m
UNDERLINE	=	\033[4m
R_UNDERLINE	=	\033[24m


##					##
##	|	RULES	|	##
##					##

$(OBJ_DIR)%.o:$(SRCS_DIR)%.c $(INC_DIR)*.h
	@printf "$(_CYAN)[CC] $(<:.c=)...$(_STOP)"
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
	@printf "\r                                             \r"

all:
	@echo "$(_CYAN)$(UNDERLINE)FILLIT:$(R_UNDERLINE)$(_STOP)		$(BOLD)COMPILATION OBJECTS: IN PROGRESS..$(_STOP)\n		OBJECTS DIRECTORY: CREATION || ->\n"
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(NAME) --no-print-directory

make_libft:
	@make -C libft/

$(NAME): $(OBJ) $(INC_DIR) make_libft
	@echo "$(_CYAN)$(UNDERLINE)FILLIT:$(R_UNDERLINE)$(_STOP)		$(BOLD)COMPILATION $(NAME): IN PROGRESS..$(_STOP)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "$(_CYAN)| ->		$(NAME): $(BLINK)100%\n$(R_BLINK)$(_STOP)"
#	@sleep 0.7
#	@clear
	@echo "\n	$(_CYAN)----------------------------------------------------------"
	@echo "	|>							<|"
	@echo "	|>	███████╗██╗██╗     ██╗     ██╗████████╗		<|"
	@echo "	|>	██╔════╝██║██║     ██║     ██║╚══██╔══╝		<|"
	@echo "	|>	█████╗  ██║██║     ██║     ██║   ██║   		<|"
	@echo "	|>	██╔══╝  ██║██║     ██║     ██║   ██║   		<|"
	@echo "	|>	██║     ██║███████╗███████╗██║   ██║   		<|"
	@echo "	|>	╚═╝     ╚═╝╚══════╝╚══════╝╚═╝   ╚═╝ $(_STOP)$(BLINK)is ready$(R_BLINK)	$(_CYAN)<|"
	@echo "	|>							<|"
	@echo "	----------------------------------------------------------$(_STOP)\n"

clean:
	@echo "$(_CYAN)$(UNDERLINE)FILLIT:$(R_UNDERLINE)$(_STOP)		$(BOLD)CLEAN: IN PROGRESS..$(_STOP)\n		DELETING OBJECTS || ->\n"
	@$(RM_DIR) $(OBJ_DIR)
	@$(MAKE) clean -C libft/
	@echo "$(_CYAN)| ->		CLEAN: DONE\n$(_STOP)"

fclean: clean
	@echo "$(_CYAN)$(UNDERLINE)FILLIT:$(R_UNDERLINE)$(_STOP)		$(BOLD)FCLEAN: IN PROGRESS..$(_STOP)\n		DELETING EXEC || ->\n"
	@$(RM) $(NAME) a.out
	@$(MAKE) fclean -C libft/
	@echo "$(_CYAN)| ->		FCLEAN: DONE\n$(_STOP)"

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory


#.SILENT: $(OBJ)
#.PRECIOUS:
.PHONY: all clean fclean re make_libft
