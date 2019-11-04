/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:09:49 by reginanuree       #+#    #+#             */
/*   Updated: 2019/11/04 11:19:31 by reginanuree      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *s;
    int num;
    int i;
    int step;

    if (start > end)
      num = start - end +1;
    else
      num = end - start +1;
    s = malloc(sizeof(int) * num);
    if (start < end)
      step = 1;
    else
      step = -1;
    while(i < num)
    {
      s[i]= start;
      start = start + step;
      i++;
    }
    return(s);
}
int main()
{
  int start;
  int end;
  int *arr;
  int i;
  int num;
  num = 0;

  start = 0;
  end = -3;
  i = 0;
  if (start > end)
      num = start - end +1;
  else
      num = end - start +1;
  arr = ft_range(start,end);
  while(i < num)
  {
    printf("%d, ",arr[i]);
    i++;
  }
  printf("\n");
  return(0);
}
