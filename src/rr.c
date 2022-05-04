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

	i = 0;
	temp = a->nums[0];
	while (a->nums[i] && a->nums[i + 1])
	{
		a->nums[i] = a->nums[i + 1];
		i++;
	}
	a->nums[i] = temp;
	write(1, "ra\n", 3);
}

void rb(t_b *b)
{
	int temp;
	int i;

	i = 0;
	temp = b->nums[0];
	while (b->nums[i] && b->nums[i + 1])
	{
		b->nums[i] = b->nums[i + 1];
		i++;
	}
	b->nums[i] = temp;
	write(1, "rb\n", 3);
}

void rr(t_a *a, t_b *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
