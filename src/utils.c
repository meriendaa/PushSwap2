/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:20:09 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/07 20:20:11 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_min(int *nums)
{
	int	i;
	int	min;

	i = 0;
	min = nums[i];
	while (nums[i])
	{
		if (nums[i] < min)
			min = nums[i];
		i++;
	}
	return (min);
}

int	find_max(int *nums)
{
	int	i;
	int	max;

	i = 0;
	max = nums[i];
	while (nums[i])
	{
		if (nums[i] > max)
			max = nums[i];
		i++;
	}	
	return (max);
}

void	send_min_a(t_a *a, t_b *b, int min, int i)
{
	if (a->nums[1] == min)
	{
		sa(a);
		pb(a, b);
		return ;
	}
	while (a->nums[0] != min)
	{	
		if (a->nums[0] == min && a->size_a < 3)
			pb(a, b);
		if (i >= a->size_a / 2)
			rra(a);
		else
			ra(a);
		if (a->nums[0] == min)
		{
			pb(a, b);
			return ;
		}
	}
}

void	send_max_b(t_a *a, t_b *b, int max, int i)
{
	if (b->nums[1] == max)
	{
		sb(b);
		pa(a, b);
		return ;
	}
	while (b->nums[0] != max)
	{
		if (b->nums[0] == max)
			pa(a, b);
		if (i >= b->size_b / 2)
			rrb(b);
		else
			rb(b);
		if (b->nums[0] == max)
		{
			pa(a, b);
			return ;
		}
	}
}
