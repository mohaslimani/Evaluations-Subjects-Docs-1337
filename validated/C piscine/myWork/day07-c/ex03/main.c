/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 04:12:33 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/29 04:14:48 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat1(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if(dest[0] != '\0')
	{
		dest[i] = '\n';
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	int 	i;
	int 	j;
	int 	k;
	char	*c;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		k = j;
		i++;
	}
	c = (char *)malloc(sizeof(char) * (k + 1));
	i = 0;
	while (++i < argc)
		ft_strcat1(c, argv[i]);
	printf("%s\n",c);
	return (0);
}