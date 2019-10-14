/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:25:51 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 11:13:12 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//--------------
int main(int argc, char **argv)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (argc == 3)
    {

    }
    write(1,"\n",1);
    return(0);
}
// #include <unistd.h>
// int check( char *str, int i)
// {
// 	int j;
// 	j = 0;
// 	while (j < i)
// 	{
// 		if (str[j]== str[i])
// 			return(0);
// 		j++;
// 	}
// 	return(1);
// }

// int main(int argc, char **argv)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 0;
// 	if (argc == 3)
// 	{
// 		while (argv[1][i] && argv[2][j])
// 		{
// 			if (check(&argv[1][i], i))
// 			{
// 				if (argv[1][i] == argv[2][j])
// 				{
// 					write (1, &argv[1][i],1);
// 				}
// 				j++;
// 			}
// 		i++;
// 		}
// 	}
// 	write (1, "\n",1);
// 	return (0);
// }
