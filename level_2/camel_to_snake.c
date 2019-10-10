/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:19:49 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/09 23:32:15 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
           if (argv[1][i] >= 'A' && argv[1][i] <='Z')
           {
               write(1,"_",1);
               argv[1][i] = argv[1][i] + 32;
           }
           write(1,&argv[1][i],1);
           i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}