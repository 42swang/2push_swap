#include "../../include/push_swap.h"

void	ra(t_list *a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list *b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
void	rotate(t_list *list)
{
	//여기서 테일연결이 안되는 중
	t_node	*temp;
	if (list->head->next->next == 0)
		swap(list);
	else
	{
		temp = list->head->next; //스택의 두번쩨 노드를 기억해둔다.
		list->tail->next = list->head; //맨마지막 노드의 다음노드는 리스트의 헤드 (맨뒤로 보내기때문에)
		list->head->prev = list->tail; // 헤드의 이전노드는 기존 테일을 가리키게 한다 (멘뒤로 보내고 이중포인터 연결해주기)
		list->head->next->prev = 0; // 헤드와 두번째 노드의 연결을 끊는다.
		list->head->next = 0; // 헤드와 두번째 노드의 연결을 끊는다.
		list->tail = list->head; // 새로운 ㄱ테일은 리스트의 헤드 (맨뒤로 보내진)
		list->head = temp; // 새로운 헤드는 맨처음에 저장해준 두번째 노드
	}
}