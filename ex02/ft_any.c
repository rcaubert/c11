/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:26:53 by raubert           #+#    #+#             */
/*   Updated: 2019/08/22 16:35:12 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 1;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	tab[i] = 0;
	return (0);
}
