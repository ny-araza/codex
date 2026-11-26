/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ny-araza <ny-araza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 09:58:43 by ny-araza          #+#    #+#             */
/*   Updated: 2026/11/26 16:10:27 by ny-araza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "parse.h"

void	ft_process(t_config *config)
{
	printf("%d\n", config->nbr_of_coder);
	printf("%d\n", config->time_to_burnout);
	printf("%d\n", config->time_to_compile);
	printf("%d\n", config->time_to_debug);
	printf("%d\n", config->time_to_refactor);
	printf("%d\n", config->number_of_compiles_required);
	printf("%d\n", config->dongle_cooldown);
	printf("%s", config->scheduler);
}
