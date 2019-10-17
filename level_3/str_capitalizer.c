/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:44:31 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/16 19:53:48 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int n;
    n = 1;
    i = 0;
    int t;
    t = argc - 1;
    if (argc > 1)
    {
        while (n <= t)
        {
            i = 0;
            while(argv[n][i] != '\0')
            {
               while(argv[n][i] !='\0' && (argv[n][i]== ' ' || argv[n][i]== '\t'))
               {
                   write(1,&argv[n][i],1);
                   i++;
               }
               if (argv[n][i] != '\0')
               {
                if (argv[n][i]>= 'a' && argv[n][i]<= 'z')
                    argv[n][i]= argv[n][i] -32;
                write(1,&argv[n][i],1);
                i++;
               }
               while(argv[n][i] !='\0' && argv[n][i]!= ' ' && argv[n][i]!= '\t')
               {
                   if(argv[n][i]>= 'A' && argv[n][i]<= 'Z')
                        argv[n][i]= argv[n][i] + 32;
                   write(1,&argv[n][i],1);
                   i++;
               }
            }
            write(1,"\n",1);
            n++;
        }
    }
    else
        write(1,"\n",1);
    return(0);
}