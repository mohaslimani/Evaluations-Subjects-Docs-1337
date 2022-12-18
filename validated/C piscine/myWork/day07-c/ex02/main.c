/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 03:14:26 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/29 04:10:38 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int **p;
	int i = 0;
	printf("%d--",ft_ultimate_range(p,13,25));
	while (i < 25-13)
	{
		printf("\n%d", p[0][i]);
		i++;
	}
	return 0;
}
