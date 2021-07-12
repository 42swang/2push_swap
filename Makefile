NAME = push_swap.a

PROJ_NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar

AFLAGS = -rcs

RM = rm -rf

MAIN = main.c

SRC_DIR = ./src/

SRC_NAME = add_node.c\
			check_argv.c\
			ft_error.c\
			init_info.c\
			make_stack.c\
			utils.c\

SRCS = $(addprefix $(SRC_DIR), $(SRC_NAME))

OBJ_DIR = ./obj/

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJS = $(addprefix $(OBJ_DIR), $(OBJ_NAME))

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)
		$(CC) $(CFLAGS) $(PROJ_NAME) -c $(NAME) $(MAIN)

$(NAME) : $(OBJS)
		$(AR) $(AFLAGS) $(NAME) $(OBJS)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME) $(PROJ_NAME)

re : fclean all

.PHONY : all clean fclean re
