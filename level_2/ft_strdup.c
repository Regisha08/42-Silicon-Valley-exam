/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:45:37 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/10 15:55:44 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *s;
    int i;
    i = 0;
    while(src[i])
        i++;
    s =(char*)malloc(sizeof(char)*i);
    i = 0;
    while(src[i])
    {
        s[i]= src[i];
        i++;
    }
    s[i]= '\0';
    return(s);
}
int main()
{
    char d[10] = "sasasas";
    printf("%s\n",ft_strdup(d));
    printf("%s\n",strdup(d));
    return(0);
}