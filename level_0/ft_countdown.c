/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:41:18 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/07 22:10:10 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
    int i;
    i = '9';
    while(i >='0')
    {
        write(1,&i,1);
        i--;
    }
    write(1,"\n",1);
    return(0);
}