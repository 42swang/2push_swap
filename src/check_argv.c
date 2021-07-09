#include "../include/push_swap.h"

int	check_same(t_info *info)
{
	t_stack *i;
	t_stack *j;

	i = info->top;
	while (i != 0)
	{
		j = i->next;
		while(j != 0)
		{
			if (i->data == j->data)
				return (SAME);
			else
				j = j->next;
		}
		i = i->next;
	}
	return (1);
}


int	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] == '-')
			i++;
		if (!(ft_isdigit(str[i])))
			return (NOT_DIGIT);
		i++;
	}
	return (1);
}

int	check_int(char *str)
{
	int	str_len;
	int ret;
	int	nbr;

	str_len = ft_strlen(str);
	if (str[0] == '-' && str_len > 11)
		return (NOT_INT_RAG);
	else if (str[0] != '-' && str_len > 10)
		return (NOT_INT_RAG);
	nbr = ft_atoi(str);
	if (str_len != 1 && nbr == 0)
		return (NOT_INT_RAG);
	//음수가 아니면서 int자료형의 자릿수를 초과하는경우
	//음수일 땐 -를 포함한 int자료형의 자릿수를 초과하는경우
	return (1);
}

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
