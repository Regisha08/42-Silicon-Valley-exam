/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:33:10 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 16:44:35 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char *a, char *b)
{
    int c[128] = {0};
    int d;
    while(*a != '\0')
    {
        d = *a;
        if(c[d] == 0)
        {
            write(1,a,1);
            c[d] = 1;
        }
        a++;
    }
    while(*b != '\0')
    {
        d = *b;
        if(c[d] == 0)
        {
            write(1,b,1);
            c[d] = 1;
        }
        b++;
    }
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}
