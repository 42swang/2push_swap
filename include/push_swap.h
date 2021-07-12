#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

# define NOT_DIGIT -1
# define NOT_INT_RAG -1
# define SAME -1
# define ARGC_ERROR -1

typedef struct	s_node
{
	int	data;
	int	idx;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct	s_list
{
	int	size;
	t_node	*curr;
	t_node	*head;
	t_node	*tail;
}	t_list;


/*libft*/

void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
int	ft_atoi(const char *str);
int	ft_strlen(const char *str);
int	ft_isdigit(int c);

/*src*/

#endif
