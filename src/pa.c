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


int *push(int *stack, int num, int *old_stack, int size)
{
	int i;
	int j;

	stack = malloc(sizeof(int) * (size + 1));
	i = 0;
	j = 1;
	stack[0] = num;
	while (i < size)
	{
		stack[j] = old_stack[i];
		i++;
		j++;
	}
	return (stack);
}

int *new_stack(int *stack, int size)
{
	int i;
	int j;
	int *aux;

	i = 0;
	j = 1;
	aux = stack;
	stack = malloc(sizeof(int) *(size + 1));
	while (i < size)
	{
		stack[i] = aux[j];
		i++;
		j++;
	}
	stack[size] = 0;
	//free(aux);	
	return(stack);

}
void pa(t_a *a, t_b *b)
{
	int *aux;

	a->size_a += 1;
	b->size_b -= 1;
	aux = a->nums;
	a->nums = push(a->nums, b->nums[0], a->nums, a->size_a);
	
	b->nums = new_stack(b->nums, b->size_b);
	write(1, "pa\n", 3);
}
