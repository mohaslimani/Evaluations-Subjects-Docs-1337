/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <msoulaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:52:41 by msoulaim          #+#    #+#             */
/*   Updated: 2020/10/14 18:50:55 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <string.h>

long	long		htoi(char *str) //convert an hexa to int
//the hex number can be either 0x9b or just 9b
//i did not finish the error. example 0xk k isnt hexa but htoi will return a non null value
{
	long	long	decimal;
	int				len;
	int				i;
	int				val;

	decimal = 0;
	len = strlen(str);
	len--;
	i = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			val = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			val = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			val = str[i] - 'A' + 10;
		decimal = decimal + val * pow(16, len);
		len--;
		i++;
	}
	return (decimal);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	printf("%s ::: %lld", av[1], htoi(av[1]));
}