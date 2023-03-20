/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:12:26 by ojamal            #+#    #+#             */
/*   Updated: 2023/03/20 18:07:12 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;
    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}
