/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:13:09 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/10 15:06:53 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}
int main()
{
    char a[4]= "sadu";
    char d[9]= "saduf";
    printf("%d\n",ft_strcmp(a,d));
    printf("%d\n",strcmp(a,d));
    return(0);
}