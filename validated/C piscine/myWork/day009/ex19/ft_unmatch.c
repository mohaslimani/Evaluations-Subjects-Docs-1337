/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:43:15 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/18 12:49:09 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		if (tab[i] % 2 == 0)
		{
			while ((tab[i] != tab[j] || j == i) && j < length)
			{
				if (tab[i] != tab[j])
				{
					return (tab[i]);
					i++;
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}
