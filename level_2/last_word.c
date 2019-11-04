/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:59:54 by reginanuree       #+#    #+#             */
/*   Updated: 2019/11/04 09:33:04 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if(argc == 2)
    {
        while(argv[1][i])
            i++;
        i--;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i--;
        while((argv[1][i] != ' ' && argv[1][i] != '\t')&& i >= 0)
            i--;
        i++;
        while((argv[1][i] != ' ' && argv[1][i] != '\t')&& argv[1][i] != '\0')
        {
            write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return(0);
}
