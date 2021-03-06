/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:18:10 by tmerida-          #+#    #+#             */
/*   Updated: 2022/05/08 19:18:43 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*copy_int(t_a *a)
{
	int	i;
	int	*aux;

	i = 0;
	aux = malloc(sizeof(int) * a->size_a);
	while (i < a->size_a)
	{
		aux[i] = a->nums[i];
		i++;
	}
	return (aux);
}

void	sort_aux(int *aux, int size)
{
	int	i;
	int	prev;

	i = 1;
	while (i < size)
	{
		if (aux[i] < aux[i - 1])
		{
			prev = aux[i];
			aux[i] = aux[i - 1];
			aux[i - 1] = prev;
			i = 1;
		}
		else
			i++;
	}
}
