/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:38:26 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/29 18:44:39 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 04:47:23 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/29 18:38:21 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		nbstr(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	if (str[0] != ' ' && str[0] != '\n' && str[0] != '\t')
		nb++;
	while(str[i])
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				&& (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t')
				&& str[i + 1] != '\0')
			nb++;
		i++;
	}
	return (nb);
}

int		nbchar(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		i++;
	}
	return (i);
}

int		pointsaver(char *str ,int p)
{
	while(str[p])
	{
		if ((str[p] == ' ' || str[p] == '\n' || str[p] == '\t')
				&& (str[p + 1] != ' ' && str[p + 1] != '\n' && str[p + 1] != '\t')
				&& str[p + 1] != '\0')
			return(p + 1);
		p++;
	}
	return (p + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char 		**tstr;
	int			i;
	int			p;
	int			j;
	int			k;

	k = 0;
	i = -1;
	p = 0;
	if (str[0] == '\0')
		return (NULL);
	tstr = (char **)malloc((nbstr(str) + 1) * sizeof(char*));
	while (++i < nbstr(str))
	{
		while (str[p] == ' ' || str[p] == '\n' || str[p] == '\t')
       	{p++;}
		tstr[i] = (char *)malloc((nbchar(str + p) + 1) * sizeof(char));
		j = -1;
		while (++j < nbchar(str + p))
			tstr[i][j] = str[p + j];
		tstr[i][j] = '\0';
		p = pointsaver(str, p);
	}
	tstr[i] = 0;
	return (tstr);
}

int main ()
{
	char **k ;
	int i = 0;
	char c[] = " ";
	k = ft_split_whitespaces(c);
	while (k[i] != NULL)
	{
		printf("%s\n",k[i]);
		i++;
	}
}
