/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:24:58 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/06 23:25:36 by ojamal           ###   ########.fr       */
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

int *ft_rrange(int start, int end)
{
	ft_range(end, start);
}