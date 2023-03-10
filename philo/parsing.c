/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoo <nakoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:00:35 by nakoo             #+#    #+#             */
/*   Updated: 2023/03/10 18:46:36 by nakoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_arg(t_arg *arg, char **av)
{
	memset(arg, 0, sizeof(t_arg));
	arg->nb_of_philo = ft_atoi(av[1]);
	if (arg->nb_of_philo < 2)
		print_error_msg("The number of philosophers must be at least two.");
	arg->time_to_die = ft_atoi(av[2]);
	arg->time_to_eat = ft_atoi(av[3]);
	arg->time_to_sleep = ft_atoi(av[4]);
	if (av[5] != NULL)
		arg->must_eat_count = ft_atoi(av[5]);
}
