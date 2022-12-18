/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 06:56:52 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/31 07:16:02 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my.h"

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			add(argv[1], argv[3]);
		else if (argv[2][0] == '-')
			sous(argv[1], argv[3]);
		else if (argv[2][0] == 'x' || argv[2][0] == '*')
			multi(argv[1], argv[3]);
		else if (argv[2][0] == '/')
			div(argv[1], argv[3]);
		else if (argv[2][0] == '%')
			mod(argv[1], argv[3]);
		else
			write(1, "0\n", 2);
	}
}
