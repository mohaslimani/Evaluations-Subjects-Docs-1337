/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:48:05 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/17 21:51:26 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	free(factory);
}
