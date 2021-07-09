#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

# define NOT_DIGIT -1
# define NOT_INT_RAG -1
# define SAME -1
# define ARGC_ERROR -1

typedef struct	s_stack
{
	int	data;
	struct s_stack	*prev;
	struct s_stack	*next;
}				t_stack;

typedef struct	s_info
{
	char **argv;
	int	size;
	t_stack	*top;
	t_stack	*bot;
}	t_info;

int	ft_atoi(const char *str);
int	ft_strlen(const char *str);
int	ft_isdigit(int c);

void	push(t_stack **start, t_stack **dest);


#endif
