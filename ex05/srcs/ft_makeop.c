/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makeop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:37:46 by raubert           #+#    #+#             */
/*   Updated: 2019/08/22 15:59:33 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_makeop(char *argv1, char *argv2, char *argv3)
{
	if (argv2[0] == '+')
		ft_putnbr(ft_atoi(argv1) + ft_atoi(argv3));
	if (argv2[0] == '-')
		ft_putnbr(ft_atoi(argv1) - ft_atoi(argv3));
	if (argv2[0] == '*')
		ft_putnbr(ft_atoi(argv1) * ft_atoi(argv3));
	if ((argv2[0] == '/') && ft_atoi(argv3) == 0)
		return (ft_putstr("Stop : division by zero"));
	if ((argv2[0] == '%') && ft_atoi(argv3) == 0)
		return (ft_putstr("Stop : modulo by zero"));
	if (argv2[0] == '/')
		ft_putnbr(ft_atoi(argv1) / ft_atoi(argv3));
	if (argv2[0] == '%')
		ft_putnbr(ft_atoi(argv1) % ft_atoi(argv3));
}
