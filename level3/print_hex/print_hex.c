/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:25:41 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/05 22:18:27 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int mini_atoi(char *str)
{
	int res = 0;
	int i = -1;
	while(str[++i])
		res = res * 10 + str[i] - '0';
	return res;
}

void print_hex(int n)
{
	char *str = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &str[n % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(mini_atoi(av[1]));
	write(1, "\n", 1);
}