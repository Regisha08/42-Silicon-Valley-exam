/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:01:05 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/17 16:56:33 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoif(char *s)
{
    int res;
    res = 0;
    while(*s>='0' && *s <= '9')
    {
        res = res * 10 + (*s -'0');
        s++;
    }
    return(res);
}
void printh(int n)
{
    char hex_digits[] = "0123456789abcdef";
    if (n >= 16)
        printh(n / 16);
    write(1, &hex_digits[n % 16], 1);
}

int main(int argc, char **argv)
{
    int v;
    v = atoif(argv[1]);
    if (argc == 2)
    {
        printh(v);
    }
    write(1,"\n",1);
    return(0);
}

// #include <unistd.h>

// int		ft_atoi(char *str)
// {
// 	int n = 0;

// 	while (*str != '\0')
// 	{
// 		n = n * 10;
// 		n = n + *str - '0';
// 		++str;
// 	}
// 	return (n);
// }

// void	print_hex(int n)
// {
// 	char hex_digits[] = "0123456789abcdef";

// 	if (n >= 16)
// 		print_hex(n / 16);
// 	write(1, &hex_digits[n % 16], 1);
// }

// int		main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		print_hex(ft_atoi(argv[1]));

// 	write(1, "\n", 1);
// }