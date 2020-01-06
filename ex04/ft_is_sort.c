/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 00:54:33 by raubert           #+#    #+#             */
/*   Updated: 2019/08/22 16:31:14 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int croiss;

	i = 0;
	croiss = 0;
	if (length <= 1)
		return (1);
	while ((*f)(tab[i], tab[i + 1]) == 0)
		i++;
	if ((*f)(tab[i], tab[i + 1]) < 0)
		croiss = 1;
	else
		croiss = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0 && croiss == 0)
			return (0);
		if ((*f)(tab[i], tab[i + 1]) > 0 && croiss == 1)
			return (0);
		i++;
	}
	return (1);
}
