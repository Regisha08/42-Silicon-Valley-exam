/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:51:15 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/15 12:07:05 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int size;
    size = 0;
    while(begin_list)
    {
        begin_list = begin_list ->next;
        size += 1;
    }
    return(size);
}