/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 01:28:23 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/24 01:54:23 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size);

void    ft_rev_int_tab(int *tab, int size)
{
    int temp[size];
    int i;

    i = 0;
    while(i < size)
    {
        temp[i] = tab[i];
        i++;
    }
    i--;
    while(i >= 0)
    {
        tab[size - i - 1] = temp[i];
        i--; 
    }
    return ;
}