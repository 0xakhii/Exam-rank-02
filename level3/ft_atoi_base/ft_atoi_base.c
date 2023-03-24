/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:14:07 by ojamal            #+#    #+#             */
/*   Updated: 2023/03/24 21:24:19 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		if (str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 'W';
		if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - '7';
		i++;
	}
	return res * sign;
}
