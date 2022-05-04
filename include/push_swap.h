/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:22:07 by tmerida-          #+#    #+#             */
/*   Updated: 2022/04/19 17:22:08 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_a
{
	int *nums;
	int size_a;

}				t_a;

typedef struct s_b
{
	int *nums;
	int size_b;

}				t_b;				

typedef struct s_stack
{
	t_a *a;
	t_b *b;
}				t_stack;


int checkargs_init(char **argv, int argc);
void error(char *str);
int size_a(char **argv, int argc);
int pars2(t_a *a, t_b *b, char **argv, int argc);
int init_stack(t_stack *stack);
void algo(t_a *a, t_b *b);
void small_algo(t_a *a, t_b *b);
int check_solved(t_a *a);
void sort_3(t_a *a);
void ss(t_a *a, t_b *b);
void sb(t_b *b);
void sa(t_a *a);
void rrr(t_a *a, t_b *b);
void rrb(t_b *b);
void rra(t_a *a);
void rr(t_a *a, t_b *b);
void rb(t_b *b);
void ra(t_a *a);
void pb(t_a *a, t_b *b);
void top_on_b(t_b *b, int aux);
void get_from_a(t_a *a);
void pa(t_a *a, t_b *b);
void top_on_a(t_a *a, int aux);
void get_from_b(t_b *b);
int find_min(int *nums);
void get_from_a(t_a *a);
void pb(t_a *a, t_b *b);
void top_on_b(t_b *b, int aux);
void sort_5(t_a *a, t_b *b);
void step1_sort5(t_a *a, t_b *b);
void send_max_b(t_a *a, t_b *b, int max, int i);
int find_max(int *nums);
void send_min_a(t_a *a, t_b *b, int min, int i);
void step2_sort5(t_a *a, t_b *b);
void print_stack_b(t_b *b);
void print_stack_a(t_a *a);
void big_algo(t_a *a, t_b *b);
void radix(t_a *a, t_b *b, int max_bits);
int get_bits(t_a *a);

#endif