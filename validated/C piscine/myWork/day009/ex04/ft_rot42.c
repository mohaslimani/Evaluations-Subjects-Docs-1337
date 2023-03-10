/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 22:05:25 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/17 22:26:09 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if ((str[i] <= 'M' && str[i] >= 'A') || (str[i] <= 'm' && str[i] >= 'a'))
	{
		str[i] = str[i] + 13;
	}
	if ((str[i] <= 'Z' && str[i] >= 'N') || (str[i] <= 'z' && str[i] >= 'n'))
	{
		str[i] = str[i] - 13;
	}
	i++;
	}
	return (str);
}
