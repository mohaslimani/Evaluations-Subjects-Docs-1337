/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:27:13 by msoulaim          #+#    #+#             */
/*   Updated: 2022/12/13 12:13:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// YOU SHOULD NOT PUSH THIS FILE

#ifndef LIST_H
# define LIST_H

typedef struct     s_list
{
    int            data;
    struct s_list  *next;
}                  t_list;

#endif
