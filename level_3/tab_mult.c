/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:59:22 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/17 17:17:32 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int atoif(char *d)
{ 
    int res;
	res = 0;
	while(*d>='0' && *d<= '9')
	{
		res = res *10 + (*d - '0');
		d++;
	}
	return(res);
}
void prt(int f)
{
    char g;
    if (f >= 10)
        prt(f/10);
    g = f%10 +'0';
    write(1,&g,1);
}
int main(int argc, char **argv)
{
    int i;
    i = 1;
    int p;
    p = atoif(argv[1]);
    if (argc==2)
    {
        while(i <= 9)
        {
            prt(i);
            write(1," * ",3);
            prt(p);
            write(1," = ",3);
            prt(i*p);
            write(1,"\n",1);
            i++;            
        }
    }
    else
        write(1,"\n",1);
    return(0);
}