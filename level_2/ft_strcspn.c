/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:07:54 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/12 12:24:02 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;
    j = 0;
    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] != reject[j])
            {
                j++;
            }
            else
                return(i);
        }
        i++;
    }
    return(i);
}
int main()
{
    char a[10] = "dfg";
    char d[10] = "g";
    printf("%zu\n",ft_strcspn(a,d));
    printf("%lu\n",strcspn(a,d));
    return(0);
}