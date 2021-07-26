#include "../../include/push_swap.h"

static void	move_to_top_b(t_list *list, int time)
{
	if (list->count == 1)
		return ;
	if (time == 2)
		sb(list);
	else if (time > list->count / 2) // 옮기다보면 전체 길이보다 짧아질텐데 어떻게 처리하지?
	{
		while (time++ <= list->count)
			rrb(list);
	}
	else
	{	
		while (--time > 0)
			rb(list);
	}
}


static void	move_to_top_a(t_list *list, int time)
{
	if (list->count == 1)
		return ;
	if (time == 2)
		sa(list);
	else if (time > list->count / 2) // 옮기다보면 전체 길이보다 짧아질텐데 어떻게 처리하지?
	{
		while (time++ <= list->count)
			rra(list);
	}
	else
	{	
		while (--time > 0)
			ra(list);
	}
}



void	sort_many(t_list *a, t_list *b)
{
	//일단 10개라고 생각하고 구현해보자.
	//처음에 가져온 총 인자 수를 기억해두자
	
	//----------- move to b----------
	int	all_count = a->count;
	int	chunk;
	int	find;
	int	i;

	i = all_count / 10;
	while (i <= all_count) // 모두 옮겨질때까지 반복해야하는데 조건을 아직 모르겠음
	{
		chunk = all_count / 10; //청크는 2개 단위
		a->pointer = a->head;
		while (a->pointer != 0 && 0 < chunk) // 반복문 안에서 리스트가 끝나면 하나의 청크를 다 옮긴것으로 간주
		{
			// 1. 변수를 선언해서 몇번 보냈는지 세어서 청크랑 비교한다. 2번찾았는데 청크단위가 2라면 반복문탈출
			// 2. 이미 있는 변수를 사용하기
			// !!!굳이 리스트를 전부 훑지 않아도 청크에 해당하는 노드를 다 찾아냈다면 굳이 반복문을 실행할 필요가 있을까?-> 이걸 해결해야함.
			if (0 < a->pointer->idx && a->pointer->idx <= i)
			{
				find = find_node(a, a->pointer->idx); //그 노드가 몇번째 위치하는 지 찾아낸다.
				move_to_top_a(a, find); // 그 노드를 맨 위로 올린다.
				pb(a, b); // 그 노드를 b로 보낸다.
				a->pointer = a->head;
				chunk--;// 여러개를 찾아야 할때는 break으로 날리면 안된다..
			}
			else
				a->pointer = a->pointer->next; // 조건문 해당사항 없거나, pb했다면 포인터를 다음으로 넘김
		}
		i += (all_count / 10); //다음 청크를 구한다.
	}

	//----------- 다시 정렬하면서 a로 데리고 오는 과정--------
	/*
	1. 이번엔 모든 인덱스를 맨 뒤부터 찾으면서 완벽하게 정렬해야한다.
	2. move to b처럼 찾으려는 노드를 발견하고 pa하면 반복문을 탈출해야한다.
	*/


	int	b_to_a;

	b_to_a = b->count;
	b->pointer = b->head;
	while (b_to_a > 0)// head가 null이 되는 순간이 있을까? (b에 노드가 하나남으면 pa하면서 헤드가 널이된다)
	{
		//printf("b_to_a: %d    b->head->data %d\n", b_to_a, b->pointer->data);
		if (b_to_a == b->pointer->idx)
		{
			find = find_node(b, b_to_a);
			move_to_top_b(b, find);
			//여기서 왜 rb해주면 세그먼트 폴트가 뜰까? rb로 넘긴 애들을 읽어오지 못함 //테일오류
			pa(b, a);
			b->pointer = b->head;
			b_to_a--;
		}
		else
			b->pointer = b->pointer->next;
	}

// b스택에 청크대로 잘들어가는데 a로 돌아오는게 안됨. rb에서 테일을 못읽어서 세그폴트 뜨는 걸로 추정됨.
// push 에서 tail지정이 안되어있었음, tail->next시 세그먼트폴트 발생
// ->테일을 헤드로 설정하는건 스택이 비어있을 때 맨 처음만.. 스택에 데이터를 넣을 때 계속 테일도 갱신하고있었음.


}


	/*
	1.덩어리를 나누는 기준을 정하자
	300개 미만의 인자가 들어온다면 10씩 쪼개서 옮겨담는다.
	a = 100 -> b(10) -> a(1)
	301개 ~ 500개의 인자가 들어온다면 먼저 100개 단위로 옮겨두고,
	a = 300 -> b(100) -> a(50개) -> b(10개) -> a(1개)?
	*/

//이미 정렬된 부분을 제외하고 정렬하는 방법은 없을까?

//예를 들어서 n개의 인자가 들어온다고 할 때, n/10 으로 구간을 나눠서 정렬을 한다면?
/*
1. 10개 -> 1~10까지 각각
	20개 -> 2단위로
	.
	.
	.
	100개 -> 10단위..

	a->b->a 로 한번에 정렬을 끝내는 것보다 a로 다시 올 때 더 쪼개서 들어오는게 낫지 않나?


	뒤죽박죽 섞여있는 스택에서 먼저 인덱스를 1~ count/10 만큼씩 범위로 묶어서 b스택으로 옮긴다.
	b->a로 올 때는 count의 역순으로 a에 정렬한다



*/