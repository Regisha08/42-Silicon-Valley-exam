/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:25:51 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 16:30:09 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int chaek(char *str, char a)
{
    int x;
    x = 0;
    while(str[x])
    {
        if (str[x]== a)
            return(1);
        x++;
    }
    return(0);
}

int main(int argc, char **argv)
{
    int a;
    int b;
    int c;
    a = 0;
    b = 0;
    c = 0;
    
    if (argc ==3)
    {
        while(argv[1][a] && c == 0)
        {
            if(argv[1][0] == argv[2][b])
            {
                write(1,&argv[1][0],1);
                c = 1;
            }
            else 
                b++;
        }
        a++;
        b = 0;
        c = 0;
        while (argv[1][a])
        {
            b = 0;
            while (argv[1][b] != argv[1][a] && b < a)
            {
                b++;
            }
            b--;
            if (b == a - 1)
            {
                if (chaek(&argv[2][c], argv[1][a]) == 1)
                {
                    write(1,&argv[1][a],1);
                    a++;
                }
                else if (chaek(&argv[2][c], argv[1][a]) == 0)
                    a++;
            }
            else
                a++;
        }
    }
	write (1, "\n",1);
	return (0);
}
