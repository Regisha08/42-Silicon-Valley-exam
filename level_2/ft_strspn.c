/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:44:31 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/12 12:24:51 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
///---------
size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;
    j = 0;
    i = 0;
    while (s[i])
   
    return(i);
}
int main()
{
    char a[10] = "234";
    char d[10] = "342";
    printf("%zu\n",ft_strspn(a,d));
    printf("%lu\n",strspn(a,d));
    return(0);
}