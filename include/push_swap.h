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
	int quarter;
	int mid;

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
void small_algo(t_a *a);
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
void pa(t_a *a, t_b *b);
int *push(int *stack, int num, int *old_stack, int size);
int *new_stack(int *stack, int size);
int find_min(int *nums);
void sort_5(t_a *a, t_b *b);
void step1_sort5(t_a *a, t_b *b);
void send_max_b(t_a *a, t_b *b, int max, int i);
int find_max(int *nums);
void send_min_a(t_a *a, t_b *b, int min, int i);
void step2_sort5(t_a *a, t_b *b);
void print_stack_b(t_b *b);
void print_stack_a(t_a *a);
void big_algo(t_a *a, t_b *b);
void big_algo_one(t_a *a, t_b *b);
void big_algo_two(t_a *a, t_b *b);
void big_algo_three(t_a *a, t_b *b);
void ft_init_quarter(t_a *a);
int create_mid(t_a *a);
void sort_aux(int *aux, int size);
int  *copy_int(t_a *a);


#endif