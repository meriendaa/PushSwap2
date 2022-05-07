/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:58:48 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 15:58:50 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ra(t_a *a)
{
	int temp;
	int i;
	int j;
	
	i = 0;
	j = 0;
	if (a->size_a != 0)
	{
		temp = a->nums[0];
		while(i < a->len -1)
		{
			a->nums[i] = a->nums[j + 1];
			i++;
			j++;
		}
		a->nums[a->size_a -1] = temp;
	}
	write(1, "ra\n", 3);
}

void rb(t_b *b)
{
	int temp;
	int i;
	int j;
	
	i = 0;
	j = 0;
	if (b->size_b != 0)
	{
		temp = b->nums[0];
		while(i < b->len -1)
		{
			b->nums[i] = b->nums[j + 1];
			i++;
			j++;
		}
		b->nums[b->size_b -1] = temp;
	}
	write(1, "rb\n", 3);
}

void rr(t_a *a, t_b *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
