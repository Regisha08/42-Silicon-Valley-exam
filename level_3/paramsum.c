/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:05:05 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/15 18:15:28 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
void print(int f)
{
    char c;
    c = 0;
    if (f>= 10)
        print(f/10);
    c = (f%10) +'0';
    write(1,&c,1);
}
int main(int argc,char **argv)
{
    int i;
    i = 0;
    if (argc == 1)
        write(1,"0",1);
    if (argc > 1)
    {
        while(argv[i])
            i++;
        i--;
        print(i);
    }
    write(1,"\n",1);
    return(0);
}