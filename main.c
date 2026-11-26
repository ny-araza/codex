/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ny-araza <ny-araza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:45:40 by ny-araza          #+#    #+#             */
/*   Updated: 2026/11/26 16:45:50 by ny-araza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "process.h"

int	main(int argc, char **argv)
{
	t_config	config;

	if (ft_parse(argc, argv, &config) == 1)
		ft_process(&config);
	return (0);
}
