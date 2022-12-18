/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 06:42:10 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/17 07:43:32 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;
	int		len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	i = i - 1;
	j = 0;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	str[len] = '\0';
	return (str);
}
