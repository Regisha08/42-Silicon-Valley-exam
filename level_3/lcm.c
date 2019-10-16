/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:56:05 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/15 18:03:37 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;
    
    if (a == 0 || b == 0)
        return(0);
    if (a > b)
        n = a;
    else 
        n =b;
    while(1)
    {
        if (n%a == 0 && n%b == 0)
            return(n);
        n++;
    }
}

int main(void)
{
	printf("%u\n", lcm(6, 4));
}