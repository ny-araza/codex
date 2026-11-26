/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ny-araza <ny-araza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:58:41 by ny-araza          #+#    #+#             */
/*   Updated: 2026/11/26 16:10:22 by ny-araza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parse.h"
#include "utils.h"

void	ft_stock_config(t_config *config, int number, int index)
{
	if (index == 1)
		config->nbr_of_coder = number;
	if (index == 2)
		config->time_to_burnout = number;
	if (index == 3)
		config->time_to_compile = number;
	if (index == 4)
		config->time_to_debug = number;
	if (index == 5)
		config->time_to_refactor = number;
	if (index == 6)
		config->number_of_compiles_required = number;
	if (index == 7)
		config->dongle_cooldown = number;
}

char	*ft_get_arguments(unsigned int index)
{
	if (index == 1)
		return ("number_of_coders");
	else if (index == 2)
		return ("time_to_burnout");
	else if (index == 3)
		return ("time_to_compile");
	else if (index == 4)
		return ("time_to_debug");
	else if (index == 5)
		return ("time_to_refactor");
	else if (index == 6)
		return ("number_of_compiles_required");
	else if (index == 7)
		return ("dongle_cooldown");
	else
		return ("scheduler");
}

int	ft_check_number(char *args)
{
	unsigned long	i;

	i = 0;
	while (i < strlen(args))
	{
		if (ft_isdigit(args[i]) == -1)
			return (-1);
		i++;
	}
	return (1);
}

int	ft_parse(int argc, char **argv, t_config *config)
{
	int	i;

	i = 1;
	if (argc != 9)
	{
		printf(
			"%s\n", "Parsing error: Arguments must be <number_of_coders> "
			"<time_to_burnout> <time_to_compile> <time_to_debug> "
			"<time_to_refactor> <number_of_compiles_required> "
			"<dongle_cooldown> <scheduler>");
		return (0);
	}
	while (i < argc)
	{
		if (i == 8)
		{
			if (strcmp(argv[i], "fifo") != 0 && strcmp(argv[i], "edf") != 0)
			{
				printf("Parse Error: The arguments %s must be 'fifo' or 'edf'", ft_get_arguments(i));
				return (-1);
			}
			config->scheduler = argv[i];
		}
		else{
			if (ft_check_number(argv[i]) == 1)
				ft_stock_config(config, atoi(argv[i]), i);
			else
			{
				printf("Parse Error: The arguments %s must integer positif", ft_get_arguments(i));
				return (-1);
			}
		}
		i++;
	}
	return (1);
}
