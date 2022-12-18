/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 08:04:00 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/31 08:05:07 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	add(char *a, char *b);
void	sous(char *a, char *b);
void	multi(char *a, char *b);
void	div(char *a, char *b);
void	mod(char *a, char *b);

#endif
