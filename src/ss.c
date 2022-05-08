/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:59:01 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 15:59:03 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_a *a)
{
	int	temp;

	temp = a->nums[0];
	a->nums[0] = a->nums[1];
	a->nums[1] = temp;
	write(1, "sa\n", 3);
}

void	sb(t_b *b)
{
	int	temp;

	temp = b->nums[0];
	b->nums[0] = b->nums[1];
	b->nums[1] = temp;
	write(1, "sb\n", 3);
}

void	ss(t_a *a, t_b *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 1);
}
