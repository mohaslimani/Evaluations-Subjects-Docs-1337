/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 06:16:29 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/31 06:16:44 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *c;

	i = 0;
	c = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		c[i] = f(tab[i]);
		++i;
	}
	return (c);
}
