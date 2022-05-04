/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:27:31 by tmerida-          #+#    #+#             */
/*   Updated: 2022/04/29 17:27:33 by tmerida-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

int check_num (char *argv)
{
	int i;

	i = 0;
	if (argv[i] == '-')
		i++;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int check_dup(char **argv, char *ar)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == ft_atoi(ar))
			cont++;
		i++;
	}
	if (cont > 1)
		return (0);
	return(1);
}

int checkargs_init(char **argv, int argc)
{
	int i;
	long num;
	char **str;

	i = 0;
	if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		str = argv;
	}
	while (str[i])
	{
		num = ft_atoi(str[i]);
		if (check_num(str[i]) == 0)
			return (0);
		if (check_dup(str, str[i]) == 0)
			return (0);
		if (num > 2147483648 || num < -2147483648)
			return (0);
		i++;
	}
	return (1);
}