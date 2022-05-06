#include "../include/push_swap.h"

void big_algo_three(t_a *a, t_b *b)
{
	int i;
	int max;

	i = 0;

	while (b->size_b >= 1)
	{
		max = find_max(b->nums);
		if (b->nums[0] == max)
		{
			pa(a, b);
			i++;
		}
		else if(b->nums[i] != max)
			i++;
		else if(b->nums[i] == max){
			send_max_b(a, b, max, i);
			i = 0;
		}
	}
	
}


void big_algo_two(t_a *a, t_b *b)
{
	int i;
	int min;

	i = 0;
	while(a->size_a >= 1)
	{
		min = find_min(a->nums);
		if (a->nums[0] == min)
		{
			pb(a, b);
			i++;
		}
		else if (a->nums[i] != min)
			i++;
		else if (a->nums[i] == min)
		{
			send_min_a(a, b, min, i);
			i = 0;
		}
	}

}

void big_algo_one(t_a *a, t_b *b)
{
	int i;
	int midpoint;

	i = 0;
	midpoint = create_mid(a);
	while (i < a->size_a)
	{
		if (a->nums[i] < midpoint)
		{
			send_min_a(a, b, a->nums[i], i);
			i = 0;
		}
		i++;
	}

}
