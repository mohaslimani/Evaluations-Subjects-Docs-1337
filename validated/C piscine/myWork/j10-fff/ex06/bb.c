/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 07:57:43 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/31 07:57:46 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

void	add(char *a, char *b)
{
	int k;

	k = ft_atoi(a) + ft_atoi(b);
	ft_putnbr(k);
	write(1, "\n", 1);
}

void	sous(char *a, char *b)
{
	int k;

	k = ft_atoi(a) - ft_atoi(b);
	ft_putnbr(k);
	write(1, "\n", 1);
}

void	multi(char *a, char *b)
{
	int k;

	k = ft_atoi(a) * ft_atoi(b);
	ft_putnbr(k);
	write(1, "\n", 1);
}

void	div(char *a, char *b)
{
	int k;

	if (ft_atoi(b) == 0)
		write(1, "Stop : division by zero\n", 24);
	else
	{
		k = ft_atoi(a) / ft_atoi(b);
		ft_putnbr(k);
		write(1, "\n", 1);
	}
}

void	mod(char *a, char *b)
{
	int k;

	if (ft_atoi(b) == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		k = ft_atoi(a) % ft_atoi(b);
		ft_putnbr(k);
		write(1, "\n", 1);
	}
}
