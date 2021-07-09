#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_info	*info;
	int	ret;

	if (ac == 1)
		return (ft_error(ARGC_ERROR));
	info = malloc(sizeof(t_info));
	if (!(info))
		return (ft_error(-1));
	init_info(info);
	info->argv = **av;
	return (push_swap(info));
}
	/*
	while (argv[i])
	{
		ret = check_digit(argv[i]); //1.digit이 아니면 out
		if (ret == NOT_DIGIT)
			return (ft_error(NOT_DIGIT)); //1.5반복문탈출어떻게하지?
		ret = check_int(argv[i]); //2.int 자릿수가 아니면 out
		if (ret == NOT_INT_RAG)
			return (ft_error(NOT_INT_RAG));
		add_stack(&a, info, argv[i]);
		i++;
		//2.5 atoi로 변환 후 int범위가 아닌애들 out
		//3.스택에 담기
	}
	ret = check_same(info); //4. 중복체크하기
	if (ret == SAME)
		return (ft_error(SAME));
	/*printf stack
	printf("top : %d\n", info->top->data);
	printf("bot : %d\n", info->bot->data);
	p = info->top;
	while (p != 0)
	{
		printf("[%d]\n", p->data);
		p = p->next;
	}
	*/
