/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:43:09 by ojamal            #+#    #+#             */
/*   Updated: 2023/03/19 04:14:08 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int i = 0;
	int tmp = nbr;
	while (tmp)
	{
		i++;
		tmp /= 10;
	}
	char *str = malloc(sizeof(char *) * i);
	if (nbr == 0)
		str[0] = '0';
	if (nbr <= 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[i] = '\0';
	while (nbr)
	{
		str[--i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return str;
}