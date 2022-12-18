/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:34:45 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/18 12:41:56 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int max;
	int i;

	i = 0;
	m = 0;
	while (i < length)
	{
		if (tab[i] > m)
			m = tab[i];
		i++;
	}
	return (m);
}