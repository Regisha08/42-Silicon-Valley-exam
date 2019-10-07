/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:39:08 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/07 22:10:23 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1,"a",1);
				break;
			}
			i++;
		}
	}
	else
		write (1,"a",1);
	write(1,"\n",1);
	return(0);
}
