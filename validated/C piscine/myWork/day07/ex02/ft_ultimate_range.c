/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 01:51:35 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/29 04:08:09 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *rang;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	rang = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		rang[i] = min;
		min++;
		i++;
	}
	*range = rang;
	return (i);
}
