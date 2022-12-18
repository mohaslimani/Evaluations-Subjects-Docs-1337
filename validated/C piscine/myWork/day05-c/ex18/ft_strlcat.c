/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 03:25:11 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/27 03:38:06 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (src[i] != '\0')
		i++;
	j = 0;
	while (dest[j] != '\0')
		j++;
	if (j >= size)
		i = i + size;
	else
		i = i + j;
	w = 0;
	while (src[k] != '\0' && j + 1 < size)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (i);
}
