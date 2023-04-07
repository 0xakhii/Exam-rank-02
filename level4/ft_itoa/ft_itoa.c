/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:43:09 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/07 21:07:25 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int i;
	long tmp = nbr;
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr <= 0)
		i = 1;
	else
		i = 0;
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
