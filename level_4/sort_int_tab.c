/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:23:09 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/17 22:21:36 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sort_int_tab(int *tab, unsigned int size)
{
    int max;
    max=0;
    unsigned int i;
    i = 0;
    while(i < (size-1))
    {
        while(tab[i]>tab[i+1])
        {
            max = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = max;
            i = 0;
        }
        i++;
    }
    return(*tab);
}
void	print_arr(int *tab, unsigned int size)
{
	unsigned int i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		++i;
	}
	printf("\n");
}

int		main(void)
{
	int tab[] = { 5, -4, 3, -2, 1, 0 };
	unsigned int size = sizeof(tab) / sizeof(*tab);

	print_arr(tab, size);
	sort_int_tab(tab, size);
	print_arr(tab, size);
}