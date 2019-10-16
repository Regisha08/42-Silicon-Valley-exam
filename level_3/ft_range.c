/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:09:49 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/15 12:28:54 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    char *s;
    
    if ()
    
}
int main()
{
    int start;
    int end;
    int *res;
    int z;
    int d;
    z = 0;
    start = 0;
    end = -3;
    if (end < 0)
      d = (end *(-1) - start)+1;
    else
      d = (end - start) +1;
    res = ft_range(start, end);
    while(z < d)
    {
        printf("%d, ",res[z]);
        z++;
    }
    return(0);
}