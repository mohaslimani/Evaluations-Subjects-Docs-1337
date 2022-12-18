/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smouzdah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:27:49 by smouzdah          #+#    #+#             */
/*   Updated: 2019/01/13 19:51:34 by smouzdah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line_mid(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}

void	line_topbottom(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == x || i == 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 0;
		while (++i <= y)
		{
			if (i == 1 || i == y)
			{
				line_topbottom(x);
			}
			else
			{
				line_mid(x);
			}
		}
	}
}
