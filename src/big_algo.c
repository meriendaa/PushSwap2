#include "../include/push_swap.h"

int get_bits(t_a *a)
{
	int max;
	int max_bits;

	max_bits = 0;
	max = find_max(a->nums);
	printf("%d\n", max);
	while (max != 0)
	{
		max /= 10;
		max_bits++;
		printf("%d\n", max_bits);
	}
	return (max_bits);
}

void radix(t_a *a, t_b *b, int max_bits)
{
	int i;
	int j;

	i = 0;
	while (i <= max_bits)
	{
		j= 0;
		while (j < a->size_a)
		{
			
			if (((a->nums[i] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while(b->size_b != 0)
			pa(a, b);
		i++;
	}
}

void big_algo(t_a *a, t_b *b)
{
	int max_bits;
	max_bits = get_bits(a);


	printf("%d\n", max_bits);
	radix(a, b, max_bits);
	//print_stack_a(a);

}