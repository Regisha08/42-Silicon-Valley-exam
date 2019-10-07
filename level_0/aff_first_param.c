/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:39:18 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/07 22:10:20 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc >= 2)
	{
		while(argv[1][i])
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
