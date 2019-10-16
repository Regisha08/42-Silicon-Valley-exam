/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:39:07 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/15 17:52:57 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if(argc == 3)
    {
        while (argv[1][i] || argv[2][j] =='\0' )
        {
            while (argv[2][j])
            {
                if (argv[1][i] != argv[2][j])
                    j++;
                else
                    break;
            }
            if ( argv[2][j] =='\0')
                break;
            j++;
            i++;
        }
        if (argv[1][i] == '\0')
            write(1,"1",1);
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
    return(0);
}