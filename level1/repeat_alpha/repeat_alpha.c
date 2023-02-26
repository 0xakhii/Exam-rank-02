/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:48:32 by ojamal            #+#    #+#             */
/*   Updated: 2023/02/26 14:50:47 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				j = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				j = argv[1][i] - 'A' + 1;
			else
				write(1, &argv[1][i], 1);
			while (j > 0)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}