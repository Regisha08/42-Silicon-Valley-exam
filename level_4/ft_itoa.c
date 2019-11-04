/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 22:24:49 by reginanuree       #+#    #+#             */
/*   Updated: 2019/11/04 14:41:59 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int lenth(int nbr)
{
    int len;
    len = 0;
    if(nbr<0)
    {
        nbr = nbr* -1;
        len++;
    }
    while(nbr>0)
    {
        nbr = nbr /10;
        len++;
    }
    return(len);
}
char	*ft_itoa(int nbr)
{
    char *r;
    int len;
    len = lenth(nbr);
    r = (char*)malloc(sizeof(char)*len +1);
    r[len--]= '\0';
    if(nbr<0)
    {
        r[0]= '-';
        nbr= nbr*-1;
    }
    else if (nbr == 0)
        r[0] = '0';
    while(nbr>0)
    {
        r[len] = '0' +(nbr%10);
        nbr=nbr/10;
        len--;
    }
    return(r);
}
int main()
{
    int t;
    t = 0;
    printf("%s\n",ft_itoa(t));
    return(0);
}
