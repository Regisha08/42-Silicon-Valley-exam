/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:38:40 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/07 21:45:30 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(void)
{
    int i;
    i = '0';
    while(i <= '9')
    {
        write(1,&i,1);
        i++;
    }
}
int main()
{
    ft_print_numbers();
    return(0);
}