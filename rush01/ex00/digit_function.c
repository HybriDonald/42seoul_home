/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 04:08:54 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/19 04:22:33 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}

int number_of_params(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if(is_digit(str[i]))
        {
            count++;
        }
        i++;
    }
    return (count);
}

int get_max_number(char *str)
{
    return (number_of_params(str) / 4);
}