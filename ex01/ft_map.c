/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 21:41:29 by raubert           #+#    #+#             */
/*   Updated: 2019/08/22 01:49:25 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*range;

	i = 0;
	if (!(range = malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		range[i] = (*f)(tab[i]);
		i++;
	}
	return (range);
}
