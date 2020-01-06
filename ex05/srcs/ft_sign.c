/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:27:07 by raubert           #+#    #+#             */
/*   Updated: 2019/08/22 16:00:08 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(char *sign)
{
	if ((sign[0] == '+' || sign[0] == '-' ||
				sign[0] == '/' || sign[0] == '*' ||
				sign[0] == '%') && (sign[1] == '\0'))
		return (1);
	else
		return (0);
}