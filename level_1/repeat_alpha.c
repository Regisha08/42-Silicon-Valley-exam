/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:29:51 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/08 11:44:28 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int t;
    t = 0;
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                t = argv[1][i] - 'a';
            } 
            else if (argv[1][i]>= 'A' && argv[1][i]<= 'Z')
            {
                t = argv[1][i] - 'A';
            }
            else 
                write(1,&argv[1][i],1);
            while(t >= 0)
            {
                write(1,&argv[1][i],1);
                t--;
            }
            i++;
        }
    }
    write(1,"\n",1);
    return(0);
}