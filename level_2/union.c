/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:33:10 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 11:12:22 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int k;
    k = 0;
    int j;
    i = 0;
    j = 0;
    if (argc == 3)
    {
        write(1,&argv[1][i],1);
        i++;
        while(argv[1][i])
        {
            k = 0;
            while(k < i)
            {
                if (argv[1][k] != argv[1][i])
                    write(1,&argv[1][i],1);
                k++;
            }
            i++;
        }
        write(1,&argv[2][j],1);
        j++;
        while(argv[1][i] && argv[2][j])
        {
            i = 0;
            while()
            {
                if (argv[1][i] != argv[2][j])
                {
                    if (argv[2][k] != argv[2][j]
                        write(1,&argv[2][j],1);
                }
                k++;
            }
            i++;
        }
        
    }
    write(1,"\n",1);
    return(0);
}
// #include <unistd.h>
// int che(char *f, int j)
// {
// 	int i;
// 	i = 0;

// 	while(i<j)
// 	{
// 		if(f[i]==f[j])
// 			return(0);
// 		i++;
// 	}
// 	return(1);
// }
// int check(char *f, char d)
// {
// 	int i;
// 	i = 0;

// 	while(f[i])
// 	{
// 		if(f[i]== d)
// 			return(0);
// 		i++;
// 	}
// 	return(1);
// }

// int main(int argc, char **argv)
// {
// 	int i;
// 	int j;
// 	int d;

// 	 i = 0;
// 	 j = 0;
// 	 d = 0;
// 	 write(1, &argv[1][i],1);
// 	 j = 1;
// 	 while(argv[1][j])
// 	 {
// 		 if (che(argv[1],j))
// 		 {
// 		 	write(1,&argv[1][j],1);
// 		 }
// 		 j++;
// 	 }
// 	 i=0;
// 	 while(argv[2][d])
// 	 {
// 		 if (che(argv[2],d) && check(argv[1],argv[2][d]))
// 		 {
// 			 write(1,&argv[2][d],1);
// 		 }
// 		 d++;
// 	 }
// 	 return(0);
// }
