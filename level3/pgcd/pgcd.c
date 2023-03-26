/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:39:50 by ojamal            #+#    #+#             */
/*   Updated: 2023/03/26 20:49:16 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		if (a <= 0 || b <= 0)
			return (printf("\n"));
		while(b != 0)
		{
			int tmp = b;
			b = a % b;
			a = tmp;
		}
		printf("%d", a);
	}
	printf("\n");
}