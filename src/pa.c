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

void get_from_b(t_b *b)
{
	int i;
	int *aux;

	i = 0;
	while (b->nums[i])
		i++;
	aux = malloc(sizeof(int) * (i));
	if (!aux)
		error("Error\n");
	i = 1;
	while(b->nums[i])
	{
		aux[i - 1] = b->nums[i];
		i++;
	}
	aux[i - 1] = 0;
	free(b->nums);
	b->nums = aux;
}

void top_on_a(t_a *a, int aux)
{
	int *temp;
	int i;

	i = 0;
	while (a->nums[i])
		i++;
	i = 0;
	temp = malloc(sizeof(int) * (i + 2));
	temp[0] = aux;
	while (a->nums[i])
	{
		temp[i + 1] = a->nums[i];
		i++;
	}
	temp[i + 1] = 0;
	free(a->nums);
	a->nums = temp;

}

void pa(t_a *a, t_b *b)
{
	int aux;

	aux = b->nums[0];
	get_from_b(b);
	top_on_a(a, aux);
	a->size_a += 1;
	b->size_b -= 1;
	write(1, "pa\n", 3);
}
