/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:25:23 by ojamal            #+#    #+#             */
/*   Updated: 2023/02/26 14:41:03 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mini_putnbr(int n)
{
	char c;

	if (n > 9)
		mini_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(void)
{
	int 	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			mini_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}