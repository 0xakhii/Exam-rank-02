/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 07:57:14 by ojamal            #+#    #+#             */
/*   Updated: 2023/03/14 08:08:31 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	int i = 0, j = 0;
	if (ac == 3)
	{
		while (av[2][j])
			if (av[2][j++] == av[1][i])
				i++;
		if (!av[1][i])
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}