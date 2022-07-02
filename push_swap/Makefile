NAME 		= push_swap
NAME_BONUS	= checker
CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror 
SRC 		= ft_max_min.c sa.c sortso.c utils.c utils2.c utils3.c utils4.c \
			ft_atoi1.c
MANDATORY 	= main.c
BONUS_FILE 	= checker.c checker_utils.c
OBJ_SR		= $(patsubst %.c,%.o,$(SRC))
OBJ_MAN 	= $(patsubst %.c,%.o,$(MANDATORY))
OBJ_BON 	= $(patsubst %.c,%.o,$(BONUS_FILE))
libftA      = libft/libft.a



all 			: $(NAME)

bonus 			: $(NAME_BONUS)

$(NAME) 		: $(OBJ_SR) $(OBJ_MAN) $(libftA)
				$(CC) $(CFLAGS) $(OBJ_SR) $(OBJ_MAN) $(libftA) -o $(NAME) 

$(NAME_BONUS)	: $(OBJ_SR) $(OBJ_BON) $(libftA)
				$(CC) $(CFLAGS) $(OBJ_SR) $(OBJ_BON) $(libftA) -o $(NAME_BONUS) 

%.o : %.c push_swap.h push_swap_bonus.h Makefile libftA
		gcc $(CFLAGS) -c $< -o $@ -g

$(libftA) : libft
		@make -C libft

clean			:
				rm -f $(OBJ_SR) $(OBJ_MAN) $(OBJ_BON)
				@make -C libft clean

fclean 			: clean
				rm -f $(NAME) $(NAME_BONUS)
				@make -C libft fclean


re 				: fclean all

.PHONY 			: all clean fclean re