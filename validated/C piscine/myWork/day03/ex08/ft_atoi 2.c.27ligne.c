/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 06:30:42 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/20 07:57:37 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int r;
	int i;
	int t;

	i = 0;
	r = 0;
	t = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		i++;
		t = -1;
	}
	if (str[i] > '9' || str[i] < '0')
		return (0);
	if (str[i] <= '9' && str[i] >= '0')
	{
		while (str[i] != '\0')
		{
			if (str[i] > '9' || str[i] < '0')
				break ;
			r = r * 10 + (str[i] - '0');
			i++;
		}
	}
	return (r * t);
}
