#include "../include/push_swap.h"

void	change_data()
{


}

void	make_stack_a(t_list *a,char ***av)
{
	int	i;
	char	**argv;
	char	**arr;

	argv = *av;
	i = 1;

	while (argv[i])
	{
		arr = ft_split(argv[i], ' ');
		while (arr[i])
		{
			check_digit(arr[i], a); //1.digit이 아니면 out
			check_int(argv[i], a); //2.int 자릿수가 아니면 out //2.5 atoi로 변환 후 int범위가 아닌애들 out
			add_node(&a, argv[i]);//3.스택에 담기
			free(arr[i]);
			i++;
		}
		free(arr);
		arr = 0;
	}
	check_same(a); //4. 중복체크하기
	}
	//sort(&a,&b)?
}
