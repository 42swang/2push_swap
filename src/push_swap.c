#include "../include/push_swap.h"

int	push_swap(t_info *info)
{
	int	i;
	int	ret;
	char	**data;
	t_stack	*a;
	t_stack *b;

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
	//sort(&a,&b)?
}
