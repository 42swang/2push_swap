# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 08:34:04 by swang             #+#    #+#              #
#    Updated: 2021/07/29 18:14:27 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

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

OBJS = $(SRCS:.c=.o) $(MAIN:.c=.o)

.c.o :
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : $(NAME)
		
$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
