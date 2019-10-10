/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:07:49 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/10 12:21:41 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int res;
    if (argc == 4)
    {
        if (argv[2][0] == '+')
            res = atoi(argv[1]) + atoi(argv[3]);
        if (argv[2][0] == '-')
            res = atoi(argv[1]) - atoi(argv[3]);
        if (argv[2][0] == '*')
            res = atoi(argv[1]) * atoi(argv[3]);
        if (argv[2][0] == '/')
            res = atoi(argv[1]) / atoi(argv[3]);
        if (argv[2][0] == '%')
            res = atoi(argv[1]) % atoi(argv[3]);
        printf("%d", res);
    }
    printf("\n");
    return(0);
}