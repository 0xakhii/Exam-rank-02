/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:48:47 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/07 23:58:36 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}
