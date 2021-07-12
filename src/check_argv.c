#include "../include/push_swap.h"

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
				ft_error(list);
			else
				j = j->next;
		}
		i = i->next;
	}
	return (1);
}


void	check_digit(char *str, t_list *a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] == '-')
			i++;
		if (!(ft_isdigit(str[i])))
			ft_error(a);
		i++;
	}
	return (1);
}

void	check_int(char *str, t_list *a)
{
	int	str_len;
	int	nbr;

	str_len = ft_strlen(str);
	nbr = ft_atoi(str);
	if (str_len != 1 && nbr == 0)
		ft_error(a);
	// 아토이함수에서 인트형 범위를 초과하는 경우에는 0을 반환하도록 설정
	// 만약 인자가 "0000000" 이렇게 들어오면 어떻게 처리해야할까?
	return (1);
}

/*
int	push_swap(t_info *info)
{
	char	**data;
	int	i;
	int	ret;

	data = info->argv;
	i = 1;
	while (data[i])
	{
		ret = check_digit(data[i]); //1.digit이 아니면 out
		if (ret == NOT_DIGIT)
			return (ft_error(NOT_DIGIT)); //1.5반복문탈출어떻게하지?
		ret = check_int(data[i]); //2.int 자릿수가 아니면 out //2.5 atoi로 변환 후 int범위가 아닌애들 out
		if (ret == NOT_INT_RAG)
			return (ft_error(NOT_INT_RAG));
		add_stack(&a, info, data[i]);//3.스택에 담기
		i++;
	}
	ret = check_same(info); //4. 중복체크하기
	if (ret == SAME)
		return (ft_error(SAME));
}
*/
