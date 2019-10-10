/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:22:44 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/10 13:11:46 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
    int res;
    int sing;
    res = 0;
    sing = 1;
    while (*str == ' ' || *str == '\v' || *str == '\t' || *str == '\r' || *str == '\n' || *str == '\f' || *str == '\0')
        str++;
    if(*str == '-')
    {
        sing = -1;
        str++;
    }
    while(*str>='0' && *str<='9')
    {
        res = res*10 + (*str -'0');
        str++;
    }
    res = res * sing;
    return(res);
}
int main()
{
    char *g="  -88,9";
    printf("%d\n", ft_atoi(g));
    return(0);
}