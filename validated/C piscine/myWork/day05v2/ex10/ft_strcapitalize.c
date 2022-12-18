/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 00:27:57 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/27 06:57:02 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 'a' - 'A';
		}
		i++;
	}
	i = 0;
	if ((*str != '\0') && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] = str[0] + 'A' - 'a';
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') ||
				(str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] + 'A' - 'a';
		}
		i++;
	}
	return (str);
}
