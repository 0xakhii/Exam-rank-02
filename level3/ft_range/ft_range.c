/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:40:30 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/06 23:24:17 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = -1;
	int len;
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	int *tab = (int *)malloc(sizeof(int *) * len);
	if (start <= end)
		while(++i < len)
			tab[i] = start + i;
	else
		while(++i < len)
			tab[i] = start - i;
	return tab;
}
