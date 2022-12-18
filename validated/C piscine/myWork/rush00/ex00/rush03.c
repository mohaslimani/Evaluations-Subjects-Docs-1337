/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smouzdah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:27:49 by smouzdah          #+#    #+#             */
/*   Updated: 2019/01/12 13:44:04 by smouzdah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_bb(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}

void	ligne_abc(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == x || i == 1)
		{
			if (i > 1)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('A');
			}
		}
		else
		{
			ft_putchar('B');
		}
	}
	ft_putchar('\n');
}

void	rush03(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 0;
		while (++i <= y)
		{
			if (i == 1 || i == y)
			{
				ligne_abc(x);
			}
			else
			{
				ligne_bb(x);
			}
		}
	}
}
