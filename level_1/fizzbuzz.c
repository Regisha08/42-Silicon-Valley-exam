/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 22:24:51 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/07 23:30:29 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void printnmb(int i)
{
    if (i >=10 && i <= 100)
    {
        printnmb(i/10);
        printnmb(i%10);
    }
    if (i <= 9)
    {
        i = i + '0';
        write(1,&i,1);
    }
}

int main()
{
    int i;
    i = 1;
    while(i <= 100)
    {
        if ( i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz",8);
        else if ( i % 3 == 0)
            write(1, "fizz",4);
        else if ( i % 5 == 0)
            write(1, "buzz",4);
        else
            printnmb(i);
        write(1,"\n",1);
        i++;
    }
    return(0);
}
