#include "include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b; //변수가 저장되는 공간은 어디지?
	int	i;

	i = 0;
	if (argc == 1)
		ft_error(-1, NULL);
	stack_a = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!(stack_a)) // 스택을 메인문에서 만들어도 되는걸까?
		ft_error(-1, NULL);
	make_stack(stack_a, argv);
	if (stack_a->count == 1)
		ft_free(stack_a);
	indexing(stack_a);
	if (issort(stack_a))
		return (0);
	stack_b = (t_list *)ft_calloc(1, sizeof(t_list));
	if(!(stack_b))
		ft_error(-1, stack_a);
	push_swap(stack_a, stack_b);
}
	/*
	정렬이 거의 다 되어있을 때
	별도로 처리하는 과정을 만든다면?
	
	*/

	
	//ft_free(stack_a);
	//ft_free(stack_b);
	//----test----//
	
	//printf("list->min : %d\n", stack_a->mini->data);
	/*
	t_node	*p;
	p = stack_a->head;
	while (p != 0)
	{
		printf("a| %d: [%d]\n", p->idx, p->data);
		p = p->next;
	}
	
	t_node	*ptr;
	ptr = stack_b->head;
	while (ptr != 0)
	{
		printf("b| %d: [%d]\n", ptr->idx, ptr->data);
		ptr = ptr->next;
	}
	*/
//	push_swap(stack_a, stack_b);
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
		*/
	/*
	printf stack
	printf("top : %d\n", info->top->data);
	printf("bot : %d\n", info->bot->data);
	p = info->top;
	while (p != 0)
	{
		printf("[%d]\n", p->data);
		p = p->next;
	}
	*/
