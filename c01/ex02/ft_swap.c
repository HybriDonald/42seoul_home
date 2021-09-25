/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:03:38 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/23 22:13:00 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b);

void    ft_swap(int *a, int *b)
{
    int temp;
    
    temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    temp = 0;
    return ;
}