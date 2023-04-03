/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 02:35:50 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/03 02:48:28 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (s2 && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;	
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int len = 0;
	char **split;
	if(!str)
	{
		split = (char **)malloc(sizeof(char *));
		split[0] = NULL;
		return (split);
	}
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			j++;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	split = (char **)malloc((j + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (i > j)
		{
			split[len] = (char *)malloc(sizeof(char *) * ((i - j) + 1));
			ft_strncpy(split[len++], &str[j], i - j);
		}
	}
	split[len] = NULL;
	return split;
}

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	char **splited;
	if (ac == 2)
	{
		splited = ft_split(av[1]);
		while (splited[i])
			i++;
		while (--i >= 0)
		{
			ft_putstr(splited[i]);
			if (i != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}