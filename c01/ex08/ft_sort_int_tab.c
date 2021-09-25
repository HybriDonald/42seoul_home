/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 01:56:03 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/25 19:22:29 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size);

void    ft_sort_int_tab(int *tab, int size)
{
    int key;
    int i;
    int j;

    i = 1;
    j = 0;
    while (i < size)
    {
        key = tab[i];
        j = i - 1;
        while (j >= 0 && key < tab[j])
        {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = key;
        i++;
    }
}