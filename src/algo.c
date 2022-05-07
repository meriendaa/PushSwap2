/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:57:33 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 15:57:38 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int check_solved(t_a *a)
{
	int	i;

	i = 1;
	if (a->size_a == 0 || a->size_a == 1)
		return (1);
	while (i < a->size_a)
	{
		if (a->nums[i - 1] > a->nums[i])
			return (0);
		i++;
	}
	return (1);
}

void sort_3(t_a *a)
{
	while (!check_solved(a))
	{
		if (a->nums[0] > a->nums[1] && a->nums[1] < a->nums[2] && a->nums[0] < a->nums[2])
			sa(a);
		if (a->nums[0] > a->nums[1] && a->nums[1] < a->nums[2])
			ra(a);
		if (a->nums[0] > a->nums[1] && a->nums[1] > a->nums[2])
		{
			ra(a);
			sa(a);
		}
		if (a->nums[0] < a->nums[1] && a->nums[1] > a->nums[2])
		{
			rra(a);
			if(!check_solved(a))
				sa(a);
		}
	}
}

void small_algo(t_a *a, t_b *b)
{
	if (a->size_a == 2)
		sa(a);
	if (a->size_a == 3)
		sort_3(a);
	if (a->size_a <= 5)
		sort_5(a, b);
}

void algo(t_a *a, t_b *b)
{
	if(check_solved(a))	
		return ;
	if (a->size_a <= 5)
		small_algo(a, b);
	else
		big_algo(a, b);
	free(a->clone);
	return ;
}
