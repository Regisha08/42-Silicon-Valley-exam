/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:54:10 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/07 22:03:25 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main()
{
    char a;
    char B;
    a = 'a';
    B = 'B';
    while (a <='z' && B <= 'Z')
    {
        write(1,&a,1);
        write(1,&B,1);
        a+=2;
        B+=2;
    }
    write(1,"\n",1);
    return(0);
}