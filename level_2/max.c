/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 09:07:03 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 09:20:41 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int max;
    i = 0;
    max = 0;

	if (len == 0)
		return (0);
    while(i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return(max);
}
int main()
{
    int g[9]= {1,8,9,3,6};
    printf("%d\n", max(g,5));
    return(0);
}