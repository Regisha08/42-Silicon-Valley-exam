/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:16:11 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 10:29:23 by reginanuree      ###   ########.fr       */
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
          if (argv[1][i]== '_')
          {
              i++;
              argv[1][i] = argv[1][i] -32;
          }
          write(1,&argv[1][i],1);
          i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}