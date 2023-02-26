/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:26:59 by ojamal            #+#    #+#             */
/*   Updated: 2023/02/26 17:42:03 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        
        if (av[2][0] == '*')
            printf("%d", atoi(av[1]) * atoi(av[3]));
        if (av[2][0] == '+')
            printf("%d", atoi(av[1]) + atoi(av[3]));
        if (av[2][0] == '-')
            printf("%d", atoi(av[1]) - atoi(av[3]));
        if (av[2][0] == '/')
            printf("%d", atoi(av[1]) / atoi(av[3]));
        if (av[2][0] == '%')
            printf("%d", atoi(av[1]) % atoi(av[3]));
    }
    printf("\n");
}