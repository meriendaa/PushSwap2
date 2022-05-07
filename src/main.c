/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:21:56 by tmerida-          #+#    #+#             */
/*   Updated: 2022/04/19 17:21:57 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void error(char *str)
{
	write(1, str, ft_strlen(str));
	exit(1);
}

int init_stack(t_stack *stack)
{
	stack->a = (t_a *)malloc(sizeof(t_a));
	stack->b = (t_b *)malloc(sizeof(t_b));
	if(!stack->a || !stack->b)
		return (0);
	return(1);
}

void free_all(t_stack *stack)
{
	free(stack->a->nums);
	free(stack->b->nums);
	free(stack->a);
	free(stack->b);
	free(stack);
}

int main(int argc, char **argv)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (0);

	if (init_stack(stack) == 0)
		error("Error\n");
	if(argc > 1)
	{
		if (argc > 2)
			if(!init_values(stack->a, stack->b, argv, argc))
				error("Error\n");
		algo(stack->a, stack->b);
		free_all(stack);
	}
	else
		error("Error\n");
}