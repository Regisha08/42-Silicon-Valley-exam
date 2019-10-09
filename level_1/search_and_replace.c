/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:09:08 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/08 13:05:45 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
    {
        while (argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return(0);
}