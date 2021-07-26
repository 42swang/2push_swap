#include "../include/push_swap.h"

void	indexing(t_list *list)
{
	int	i;
	int	min;

	i = 0;
	if (list->head->next == 0)
		return ;
	while (i++ < list->count)
	{
		list->pointer = list->head;
		min = 2147483647; //이게 키포인트........
		while (list->pointer != 0)
		{
			if (min >= list->pointer->data && list->pointer->idx == 0)
			{
				min = list->pointer->data;
				list->mini = list->pointer;
			}
			list->pointer = list->pointer->next;
		}
		list->mini->idx = i;
	}
}
//비교할 대상을 헤드로 설정하면 안되는 이유 : 헤드보다 작은애가 없으면 그 다음 작은애를 찾을 수가 없음

// 1.비교할 대상을 인트최대값으로 설정해두고 전체 리스트를 훑으면서 계속 작은애를 찾는다
// 2.비교대상보다 작은애가 인덱스를 가지고 있지 않는다면 걔로 최소값을 바꾼다.
// 3.전체 리스트를 다 훑었으면 젤 작은애의 인덱스에 값을 넣어준다