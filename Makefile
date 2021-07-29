# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 08:34:04 by swang             #+#    #+#              #
#    Updated: 2021/07/29 10:41:38 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

PROJ_NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar

AFLAGS = -rcs

RM = rm -rf

MAIN = main.c

SRC_DIR = ./src/
SRC_NAME = command/push.c\
			command/swap.c\
			command/rotate.c\
			command/r_rotate.c\
			utils/ft_split.c\
			utils/ft_substr.c\
			utils/ft_strdup.c\
			utils/ft_atoi.c\
			utils/ft_utils.c\
			sort/issort.c\
			sort/find_min.c\
			sort/find_node.c\
			sort/sort_two.c\
			sort/sort_three.c\
			sort/sort_four.c\
			sort/sort_five.c\
			sort/sort_many.c\
			indexing.c\
			add_node.c\
			argv_check_func.c\
			ft_error.c\
			ft_free.c\
			make_stack.c\
			push_swap.c

SRCS = $(addprefix $(SRC_DIR), $(SRC_NAME))


OBJS = $(SRCS:.c=.o)

.c.o :
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : $(NAME)
		
$(NAME) : $(OBJS)
		$(AR) $(AFLAGS) $@ $^
		$(CC) $(CFLAGS) -o $(PROJ_NAME) $(NAME) $(MAIN)

clean :
		$(RM) $(OBJS) $(NAME)

fclean : clean
		$(RM) $(PROJ_NAME)

re : fclean all

.PHONY : all clean fclean re
