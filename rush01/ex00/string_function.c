/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 04:02:02 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/19 14:26:03 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put_char(char *c)
{
    write(1, c, 1);
}

int is_param_valid(char *str, int max)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (i % 2 == 0)
        {
            if(str[i] >= max + 48 && str[i] <= '1')
            {
                return (0);
            }
        }
        i++;
    }
    i = (i + 1) / 2;
    if (!(i == 12 || i == 16 || i == 20 || i == 24 || i == 28 || i == 32 || i == 36))
    {
        return (1);
    }
    return(0);
}