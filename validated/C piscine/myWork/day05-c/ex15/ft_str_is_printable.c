/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 01:35:36 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/27 01:35:58 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0' && str[i] > 31 && str[i] < 127)
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
