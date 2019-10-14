/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:37:17 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 18:55:54 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i])
        {
            if(argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                while(argv[1][i+1] == ' ' || argv[1][i+1] == '\t')
                    i++;
                if (argv[1][i+1] == '\0')
                    break;
                write(1,&argv[1][i],1);
            }
            else
                write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return(0);
}