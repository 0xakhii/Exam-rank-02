/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:48:21 by ojamal            #+#    #+#             */
/*   Updated: 2023/03/26 02:01:08 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
		i++;
	}
	return sign * res;
}

void	ft_putnbr(int nbr)
{
	if (nbr <= '9')
	{
		nbr = nbr % 10 + '0';
		write(1, &nbr, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	if (ac == 2)
	{
		j = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(j);
			write(1, " = ", 3);
			ft_putnbr(j * i);
			write(1, "\n", 1);
			i++;
		}
	}
}