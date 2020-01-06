/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:07:36 by raubert           #+#    #+#             */
/*   Updated: 2019/08/22 15:58:55 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_makeop(char *argv1, char *argv2, char *argv3);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_sign(char *sign);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		main(int argc, char **argv);

#endif
