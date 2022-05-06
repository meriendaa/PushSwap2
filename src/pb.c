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
	int *aux;
	if (!b->nums)
	{
		b->nums = malloc(sizeof(int));
		b->nums[0] = a->nums[0];
		a->size_a -= 1;
		b->size_b += 1;
		a->nums = new_stack(b->nums, b->size_b);
		write(1, "pb\n", 3);

	}
	else
	{	
		a->size_a -= 1;
		b->size_b += 1;
		aux = b->nums;
		b->nums = push(b->nums, a->nums[0], b->nums, b->size_b);
		a->nums = new_stack(a->nums, a->size_a);
		write(1, "pb\n", 3);
	}
	
}
