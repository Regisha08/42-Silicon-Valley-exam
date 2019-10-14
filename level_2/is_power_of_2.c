/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:47:01 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/12 13:58:18 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    unsigned int i;
    i = 1;
    
    if(n == 0)
        return(0);
    if(n == 1)
        return(1);
    while(i<n)
    {
        i = i * 2;
        if (i == n)
            return(1);
    }
    return(0);
}
int main()
{
    int h;
    h = 32;
    printf("%d\n", is_power_of_2(h));
    return(0);
}
