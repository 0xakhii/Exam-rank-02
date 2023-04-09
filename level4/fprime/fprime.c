/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:28:55 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/09 03:33:41 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = atoi(av[1]);
		int i = 1;
		if (a == 1)
			printf("1");
		while(a >= ++i)
		{
			if (a % i == 0)
			{
				printf("%d", i);
				if (a == i)
					break;
				printf("*");
				a /= i;
				i = 1;
			}
		}
	}
	printf("\n");
}