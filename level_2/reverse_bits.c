/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 09:58:13 by reginanuree       #+#    #+#             */
/*   Updated: 2019/10/14 10:15:52 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
   int i;
   unsigned char res;
   i = 7;
   res = 0;
   while(i >= 0)
   {
       res |= ((octet >> i )&1)<< (7 -i);
       i--;
   }
   return(res);
}