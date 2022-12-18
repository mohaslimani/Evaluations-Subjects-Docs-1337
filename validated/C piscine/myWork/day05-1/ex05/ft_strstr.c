/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:02:58 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/24 00:36:54 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int p;

	i = 0;
	j = 0;
	p = 0;
	/*if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && str[i] == to_find[0])
		i++;
	k = i;
	if (str[i] == '\0')
		return (0);*/
	while (str[p] != '\0')
	{
		j = p;
		i = 0;
		while (str[j] == to_find[0])
		{
			if (to_find[i] != str[j])
				return (0);
			j++;
			i++;
		}
		p++;
	}
	return (str + p);
}
