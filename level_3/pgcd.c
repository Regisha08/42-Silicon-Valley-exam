/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:17:49 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/15 18:38:53 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    if (argc == 3)
    {
        int i;
        int j;
        int b;
        b = 1;
        i = atoi(argv[1]);
        j = atoi(argv[2]);
        if (i> j)
            b = i;
        else 
            b = j;
        while (b >= 1)
        {
            if (i % b == 0 && j % b == 0)
            {
                printf("%d",b);
                break;
            }
            b--;
        }
    }
    printf("\n");
    return(0);
}