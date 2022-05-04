/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:27:42 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 19:27:46 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void step1_sort5(t_a *a, t_b *b)
{
	int i;
	int min;

	i = 0;
	while(a->nums[i] && a->size_a > 3)
	{
		min = find_min(a->nums);
		if (a->nums[0] == min)
			pb(a, b);
		else if (a->nums[i] != min)
			i++;
		else if (a->nums[i] == min)
		{
			send_min_a(a, b, min, i);
			i = 0;
		}
	}
}

void step2_sort5(t_a *a, t_b *b)
{
	int i;
	int j;
	int max;

	if (a->size_a == 3)
	{
		sort_3(a);
		i = 0;
		while (b->nums[i]){
				max = find_max(b->nums);
			//printf("%d\n MAX:  ", max);
			if (b->nums[0] == max)
				pa(a, b);
			else if(b->nums[i] != max)
				i++;
			else if(b->nums[i] == max)
				send_max_b(a, b, max, i);
				i = 0;
		}
	}
}


void sort_5(t_a *a, t_b *b)
{
	step1_sort5(a, b);
	//write(1, "\nA\n", 3);
	//print_stack_a(a);
	//write(1, "B\n", 2);
	

	step2_sort5(a, b);
	//write(1, "order\n\n", 7);
	//print_stack_a(a);
}
