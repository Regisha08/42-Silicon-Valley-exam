/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:55:40 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/17 15:55:22 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int t;
    int n;
    i = 0;
    n = 1;
    t = argc -1;
    if (argc > 1)
    {
        while (argv[n][i])
        {
            i = 0;
            while (argv[n][i] != '\0')
            {
                while (argv[n][i] != '\0' && (argv[n][i] == ' ' || argv[n][i] == '\t'))
                {
                     write(1,&argv[n][i],1);
                     i++;
                }
                while(argv[n][i] != '\0' && argv[n][i] != ' ' && argv[n][i] != '\t')
                {
                    if (argv[n][i] >='a' && argv[n][i]<='z' 
                    && (argv[n][i+1] == '\0' || argv[n][i+1] == ' ' || argv[n][i+1] == '\t'))
                        argv[n][i] = argv[n][i] - 32;
                    else if (argv[n][i] >='A' && argv[n][i]<='Z' 
                    && argv[n][i+1] != '\0' && argv[n][i+1] != ' ' && argv[n][i+1] != '\t')
                        argv[n][i] = argv[n][i] + 32;
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