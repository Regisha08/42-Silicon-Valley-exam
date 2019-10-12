/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:55:40 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/11 11:44:39 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int j;
    int len;
    char s;
    i = 0;
    j =  0;
    len = 0;
    while(str[len])
        len++;
    len--;
    while(i <= len/2+1)
    {
        s = str[i];
        str[i] =str[len];
        str[len]= s;
        i++;
        len--;
    }
    return(str);
} 
int main()
{
    char d[8]= "zosn";
    printf("%s\n",ft_strrev(d));
    return(0);
}