/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:57:04 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/10 18:09:01 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    // int j;
    // j = 0;
    i = 0;
    while (*s1)
    {
        i = 0;
        while (*s2)
        {
            if (*s1 != s2[i])
                i++; 
            else
                return((char*)s1);          
        }
        s1++;
    }
    return((char*)s1);
}
int main()
{
    char a[10] = "ewq";
    char d[10] = "ws";
   
    printf("%s\n",ft_strpbrk(a,d));
    printf("%s\n",strpbrk(a,d));
    return(0);
}
