/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:27:47 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/15 11:50:07 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print(int res)
{
    char c;
    c = 0;
    if (res >=10)
        print(res /10);
    c =  (res % 10) +'0';
    write(1, &c,1);
}

int main(int argc, char **argv)
{
    int t;
    int limit;
    int res;
    int i;
    int flag;
    flag = 1;
    i = 2;
    t = 2;
    limit = atoi(argv[1]);
    res = 0;
    if (limit == 1)
        return(1);
    if (limit <0)
        return(0);
    if (argc == 2)
    {
        while (t <= limit)
        {
            flag = 1;
            i = 2;
            while(i * i <= t)
            {
                if(t%i == 0)
                    flag = 0;
                i++;
            }
            if (flag ==1)
                res = res + t;
            t++;
        }
    }
    print(res);
    return(0);
}