/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:58:22 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 15:58:25 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void pb(t_a *a, t_b *b)
{
	int top;
	int i;
	int j;

	i = 0;
	j = 0;
	if (a->size_a != 0)
	{
		top = a->nums[0];
		while (i < a->size_a -1)
			a->nums[j++] = a->nums[++i];
		i = b->size_b;
		j = b->size_b;
		while (i > 0)
			b->nums[j--] = b->nums[--i];
		b->size_b++;
		a->size_a--;
		b->nums[0] = top;
		a->nums[a->size_a] = 0;
	}
	write(1, "pb\n", 3);
}
