/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:08:30 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/09 03:09:24 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//do not turn in this file

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
