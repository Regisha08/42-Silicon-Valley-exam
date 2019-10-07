/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:39:26 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/07 22:10:17 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc,char **argv)
{
	int i;
	int n;
	i = 0;
	n = argc -1;
	if (argc >=2)
	{
		while(argv[n][i])
		{
			write(1,&argv[n][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
