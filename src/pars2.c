/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:58:40 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/03 15:58:41 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_init_quarter(t_a *a)
{
	if (a->size_a < 100)
		a->quarter = 2;
	if (a->size_a >= 100 && a->size_a <= 500)
		a->quarter = 4;
	if (a->size_a > 500)
		a->quarter = 8;
}


int pars2(t_a *a, t_b *b, char **argv, int argc)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if(!checkargs_init(argv, argc))
		return (0);
	a->nums = malloc(sizeof(int) * (argc));
	b->nums = malloc(sizeof(int) * (argc));
	if (!a->nums || !b->nums)
		return (0);
	a->size_a = argc - 1;
	b->size_b = 0;
	a->quarter = 0;
	ft_init_quarter(a);
	while (i < argc)
	{
		a->nums[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	return (1);
}
