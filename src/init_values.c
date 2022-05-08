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

int	init_values(t_a *a, t_b *b, char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (!checkargs_init(argv))
		return (0);
	a->nums = malloc(sizeof(int) * (argc));
	b->nums = malloc(sizeof(int) * (argc));
	if (!a->nums || !b->nums)
		return (0);
	a->len = argc - 1;
	b->len = a->len;
	a->size_a = a->len;
	b->size_b = 0;
	while (i < argc)
	{
		a->nums[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	a->clone = copy_int(a);
	sort_aux(a->clone, a->len);
	return (1);
}
