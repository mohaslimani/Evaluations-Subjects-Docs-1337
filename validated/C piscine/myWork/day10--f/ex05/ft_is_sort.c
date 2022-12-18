/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 06:40:27 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/31 06:50:24 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if (j <= 0 && f(tab[i], tab[i + 1]) < 0)
			j = -1;
		else if (j >= 0 && f(tab[i], tab[i + 1]) > 0)
			j = 1;
		else if (f(tab[i], tab[i + 1]) != 0)
			return (0);
		i++;
	}
	return (1);
}
