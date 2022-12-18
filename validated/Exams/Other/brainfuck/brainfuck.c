/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <msoulaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:06:16 by exam              #+#    #+#             */
/*   Updated: 2020/10/14 19:01:57 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

//test it with "--<-<<+[+[<+>--->->->-<<<]>]<<--.<++++++.<<-..<<.<+.>>.>>.<<<.+++.>>.>>-.<<<+."
//go to wikipedia and complete other conditions like "," and "[-]"
int		main(int ac, char **av)
{
	int		i;
	int		loop;
	char	*p;

	i = 0;
	loop = 0;
	p = (char *)malloc(sizeof(char) * 2048);
	if (ac == 2)
	{
		while (av[1][i])
		{
			av[1][i] == '>' ? p++ : p;
			av[1][i] == '<' ? p-- : p;
			av[1][i] == '+' ? *p += 1 : *p;
			av[1][i] == '-' ? *p -= 1 : *p;
			if (av[1][i] == '.')
				write(1, &*p, 1);
			if (av[1][i] == '[' && !*p)
			{
				loop = 1;
				while (loop)
				{
					i++;
					av[1][i] == ']' ? loop-- : loop;
					av[1][i] == '[' ? loop++ : loop;
				}
			}
			if (av[1][i] == ']' && *p)
			{
				loop = 1;
				while (loop)
				{
					i--;
					av[1][i] == '[' ? loop-- : loop;
					av[1][i] == ']' ? loop++ : loop;
				}
			}
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
