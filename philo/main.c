/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoo <nakoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:34:00 by nakoo             #+#    #+#             */
/*   Updated: 2023/03/10 18:49:04 by nakoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_arg	arg;

	if (ac < 5 || ac > 6)
		print_error_msg("There are invaild arguments.");
	init_arg(&arg, av);
	return (0);
}
