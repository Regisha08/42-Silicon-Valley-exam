/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:11:03 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/08 11:13:48 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return(i);
}

int main()
{
    char h[6]="sad";
    printf("%d\n", ft_strlen(h));
    return(0);
}