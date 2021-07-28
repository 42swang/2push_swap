#include "../include/push_swap.h"

int	check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] != ' ')
			return (i);
		i++;
	}
	return (-1);
}

void	check_same(t_list *list)
{
	t_node	*i;
	t_node	*j;

	i = list->head;
	while (i != 0)
	{
		j = i->next;
		while(j != 0)
		{
			if (i->data == j->data)
				ft_error(1, list);
			else
				j = j->next;
		}
		i = i->next;
	}
}


void	check_digit(char *str, t_list *a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			i++;
		if (!(ft_isdigit(str[i])))
			ft_error(1, a);
		i++;
	}
}

void	check_int(char *str, t_list *a)
{
	int	nbr;
	int	i;

	nbr = ft_atoi(str);
	i = 0;
	if (nbr == 0)
	{
		while (str[i])
		{
			if (str[i] != '0')
				ft_error(1, a);
			i++;
		}
	}
	// 아토이함수에서 인트형 범위를 초과하는 경우에는 0을 반환하도록 설정
	// 만약 인자가 "0000000" 이렇게 들어오면 어떻게 처리해야할까? - 처리완료
	// -0 +0 형태의 인자는 어떻게 처리해야하지?
}
