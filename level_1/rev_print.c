/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:47:20 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/08 11:50:21 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if(argc == 2)
    {
        while (argv[1][i])
            i++;
        i--;
        while(argv[1][i])
        {
            write(1,&argv[1][i],1);
            i--;
        }
    }
    write(1,"\n",1);
    return(0);
}