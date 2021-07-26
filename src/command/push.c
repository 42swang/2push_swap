#include "../../include/push_swap.h"

void	pa(t_list *b, t_list *a)
{
	push(b, a);
	a->count += 1;
	b->count -= 1;
	write(1, "pa\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	push(a, b);
	a->count -= 1;
	b->count += 1;
	write(1, "pb\n", 3);
}

void	push(t_list *start, t_list *dest)
{
	if (dest->head == 0) //목적지의 스택이 비어있으면
	{
		dest->tail = start->head; //처음들어오는 애가 테일.
		start->head->next->prev = 0; // 이중연결리스트에서 두번째노드가 헤드노드를 가리키고 있는것을 지워준다.
		start->pointer = start->head->next; //임시포인터가 출발지스택의 두번째 스택을 가리키고있게한다.
		start->head->next = 0; // 헤드가 다음 노드를 가리키고 있는것을 지워준다.
		dest->head = start->head; // 목적지의 헤드는 출발지의 헤드(보내줄 헤드);
		start->head = start->pointer; //출발지의 새로운 헤드는 아까 저장해둔 헤드
	}
	else if (start->head->next == 0) // 출발스택의 넥스트가 비어있을 떄 어떻게 처리해야 할까?
	{
		dest->head->prev = start->head;
		start->head->next = dest->head;
		dest->head = start->head;
		start->head = 0;
	}
	else
	{
		start->pointer = start->head->next;
		start->head->next->prev = 0;
		dest->head->prev = start->head;
		start->head->next = dest->head;
		dest->head = start->head;
		start->head = start->pointer;
	}
}
