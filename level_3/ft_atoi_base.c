/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:24:23 by reginanuree       #+#    #+#             */
/*   Updated: 2019/11/08 16:02:49 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int res;
    int sing;
    int strk;
    res = 0;
    sing = 1;
    strk = str_base;

    if (*str == ' ' || *str == '\t')
        str++;
    if (*str == '-')
    {
        sing = -1;
        str++;
    }
    if (strk <= 10)
    {
        while (*str>='0' && *str <='9')
        {
            res = res * strk + (*str - '0');
            str++;
        }
    }
    if(strk > 10)
    {
        while (*str>='0' && *str <='9')
        {
            res = res * strk + (*str - '0');
            str++;
        }
        while (*str>='a' && *str <='f')
        {
            res = res * strk + (*str - 'W');
            str++;
        }
        while (*str>='A' && *str <='F')
        {
            res = res * strk + (*str - '7');
            str++;
        }
    }
    res = res *sing;
    return(res);
}

int main()
{
    char g[] = "1a";
    printf("%d\n",ft_atoi_base(g, 10));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res;
	res = 0;

  	int sign;
    sign = 1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while(*str){
        res *= str_base;
        if (*str>='0' && *str<='9')
		res+=*str - '0';
        if (*str>='a' && *str<='f')
		res+=*str - 'a' +10;
        if (*str>='A' && *str<='F')
		res+=*str - 'A' +10;
        ++str;
    }
    return (sign*res);
}
