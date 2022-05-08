/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:58:13 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 15:58:18 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_a *a, t_b *b)
{
	int	i;
	int	j;
	int	push;

	i = 0;
	j = 0;
	if (b->size_b != 0)
	{
		push = b->nums[0];
		while (i < b->size_b - 1)
			b->nums[j++] = b->nums[++i];
		i = a->size_a;
		j = a->size_a;
		while (i > 0)
			a->nums[j--] = a->nums[--i];
		a->size_a++;
		b->size_b--;
		a->nums[0] = push;
		b->nums[b->size_b] = 0;
	}
	write(1, "pa\n", 3);
}
