/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:18:38 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/07 20:18:41 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int find_index(t_a *a, int num)
{
	int i;
	
	i = 0;
	while (i < a->len)
	{
		if (a->clone[i] == num)
			return (i);
		i++;
	}
	return(0);
}

void nums_to_index(t_a *a)
{
	int i;

	i = 0;
	while (i < a->len)
	{
		a->nums[i] = find_index(a, a->nums[i]);
		i++;
	}
}

void big_algo(t_a *a, t_b *b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	nums_to_index(a);
	while (check_solved(a) == 0)
	{
		j = 0;
		while (j < a->len)
		{
			if(((a->nums[0] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (b->size_b != 0)
			pa(a, b);
		i++;
	}
}
