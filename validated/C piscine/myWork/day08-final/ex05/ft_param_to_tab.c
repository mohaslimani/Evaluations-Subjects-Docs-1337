/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 10:22:48 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/30 12:05:20 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*wow;
	int			i;

	i = 0;
	wow = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		wow[i].size_param = ft_strlen(av[i]);
		wow[i].str = av[i];
		wow[i].copy = ft_strdup(av[i]);
		wow[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	wow[i].str = 0;
	return (wow);
}
