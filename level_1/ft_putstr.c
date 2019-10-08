/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:48:04 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/08 10:58:45 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
int main()
{
    char d[3]="sad";
    ft_putstr(d);
    return(0);
}