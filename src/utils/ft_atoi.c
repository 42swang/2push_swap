#include "../../include/push_swap.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			minus;
	int			sign;
	long long	num;

	i = 0;
	minus = 1;
	sign = 0;
	num = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		sign++;
		i++;
	}
	while (ft_isdigit(str[i]))
		num = (10 * num) + (str[i++] - '0');
	if (-2147483648 > (minus * num) || (minus * num) > 2147483647) // - 부호를 붙여주기 전에 미리 비교를해서 최솟값이 -가 떼진상태로 있었다. 고로 인트최대값보다 크다고 판단되어 에러처리되고있었음
		return (0);
	return (minus * num);
}
