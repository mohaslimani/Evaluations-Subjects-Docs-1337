/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 03:44:27 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/15 04:24:40 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int a)
{
	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + a);
	}
	else
	{
		ft_putchar('0' + a / 10);
		ft_putchar('0' + a % 10);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = 1;
		while (b <= 99)
		{
			if (a < b)
			{
				display(a);
				ft_putchar(' ');
				display(b);
				if (a != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
}
