/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:16:32 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 14:20:23 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	int				idx;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	int		count;
	t_node	*mini;
	t_node	*pointer;
	t_node	*head;
	t_node	*tail;
}	t_list;

int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
int		ft_isdigit(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);

void	make_stack(t_list *a, char **argv);
void	add_node(char *str, t_list *list);

int		check_space(char *str);
void	check_str(char *str, t_list *a);
void	check_digit(char *str, t_list *a);
void	check_int(char *str, t_list *a);
void	check_same(t_list *list);

void	push(t_list *start, t_list *dest);
void	pa(t_list *b, t_list *a);
void	pb(t_list *a, t_list *b);
void	swap(t_list *list);
void	sa(t_list *a);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);
void	rotate(t_list *list);
void	ra(t_list *a);
void	rb(t_list *b);
void	rr(t_list *a, t_list *b);
void	r_rotate(t_list *list);
void	rra(t_list *a);
void	rrb(t_list *b);
void	rrr(t_list *a, t_list *b);

int		issort(t_list *a);
int		find_min(t_list *list);
int		find_node(t_list *list, int index);
void	sort_two(t_list *a);
void	sort_three(t_list *a);
void	sort_four(t_list *a, t_list *b);
void	sort_five(t_list *a, t_list *b);
void	sort_many(t_list *a, t_list *b);

void	ft_error(int i, t_list *list);
void	ft_free(t_list **list);
void	indexing(t_list *list);
void	push_swap(t_list *a, t_list *b);
#endif
