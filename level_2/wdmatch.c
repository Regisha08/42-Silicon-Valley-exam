/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:14:12 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 11:24:18 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (argc == 3)
    {
        while(argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
            {
                i++;
                j++;
            }
            j++;
        }
        if (argv[1][i] == '\0')
        {
            i = 0;
            while(argv[1][i])
            {
                write(1,&argv[1][i],1);
                i++;
            }
        }
    }
    write(1,"\n",1);
    return(0);
}
