/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 23:15:51 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/17 23:24:53 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
	{
		return (1);
	}
	if (base % 2 == 0)
	{
		base = base / 2;
		return (ft_collatz_conjecture(base));
	}
	else if (base % 2 == 1)
	{
		base = base * 3 + 1;
		return (ft_collatz_conjecture(base));
	}
}
