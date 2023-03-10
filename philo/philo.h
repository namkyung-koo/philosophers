/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoo <nakoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:35:53 by nakoo             #+#    #+#             */
/*   Updated: 2023/03/10 18:45:26 by nakoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <pthread.h>
# include <sys/time.h>
# include "struct.h"

/* error.c */
void	print_error_msg(char *msg);

/* utils.c */
int		ft_atoi(const char *str);

/* parsing.c */
void	init_arg(t_arg *arg, char **av);

#endif