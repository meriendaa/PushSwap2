/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:58:53 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 15:58:56 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

void rra(t_a *a)
{
	int temp;
	int i;

	i = 0;
	while (a->nums[i])
		i++;
	i--;
	temp = a->nums[i];
	while (i > 0)
	{
		a->nums[i] = a->nums[i - 1];
		i--;
	}
	a->nums[i] = temp;
	write(1, "rra\n", 4);
}

void rrb(t_b *b)
{
	int temp;
	int i;

	i = 0;
	while (b->nums[i])
		i++;
	i--;
	temp = b->nums[i];
	while (i > 0)
	{
		b->nums[i] = b->nums[i - 1];
		i--;
	}
	b->nums[i] = temp;
	write(1, "rrb\n", 4);
}

void rrr(t_a *a, t_b *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
