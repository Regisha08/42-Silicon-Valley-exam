/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 09:24:46 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 09:57:41 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;
    i = 7;
    while (i>=0)
    {
        if ((octet>>i) &1)
            write(1,"1",1);
        else
            write(1,"0",1);
        i--;
    }
}
int main()
{
    print_bits(2);
    return(0);
}