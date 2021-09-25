/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 01:56:03 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/25 13:33:04 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size);
void    ft_swap(int *tab, int *tab2);

void    ft_swap(int *tab, int *tab2)
{
    int temp;

    temp = *tab;
    *tab = *tab2;
    *tab2 = temp;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;
    int j;

    i = 1;
    while (i < size)
    {
        temp = tab[i];
        j = i - 1;
        while (j >= 0)
        {
            
        }
    }
}