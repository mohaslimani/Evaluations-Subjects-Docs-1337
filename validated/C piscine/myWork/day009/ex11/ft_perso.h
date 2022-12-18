/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:30:35 by msoulaim          #+#    #+#             */
/*   Updated: 2019/01/18 12:30:39 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_AUSTIN_POWERS "xi7aja" 

typedef struct t_perso 
{
	char *name;
	char *profession; 
	float life;
	int age;
}

#endif