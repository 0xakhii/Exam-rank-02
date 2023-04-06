/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:09:22 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/06 21:31:09 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i + 1] == ' ' || str[i + 1] == '\t' || !str[i + 1]))
			str[i] -= 32;
		write(1, &str[i++], 1);
	}
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i = 0;
		while (i < ac)
		{
			rstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}