#include "../include/push_swap.h"

void	make_stack(t_list *a, char **argv)
{
	char	**arr;
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{	
		if (ft_strlen(argv[i]) == 0)
			ft_error(1, a);
		//if(인자가 모두 스페이스바로 이루어져 있으면) error처리 ex) ./push_swap 1 " " 3
		arr = ft_split(argv[i], ' ');
		if (!arr)
			ft_error(1, a);
		j = 0;
		while (arr[j])
		{	
			check_digit(arr[j], a); //1.digit이 아니면 out
			check_int(arr[j], a); //atoi로 변환 후 int범위가 아닌애들 out
			add_node(arr[j], a);//3.스택에 담기
			free(arr[j]);
			j++;
		}
		free(arr);
		arr = 0;
		i++;
	}
	check_same(a); //4. 중복체크하기
}
