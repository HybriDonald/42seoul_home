/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:35:03 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/19 14:22:50 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int main(int argc, char **argv)
{
    int max;
    
    if(argc > 2)
    {
        ft_put_char("E");
    }
    max = 0;
    max = get_max_number(argv[1]);
    if(is_param_valid(argv[1], max))
    {
        ft_put_char("E");
        ft_put_char("\n");
    }
    return (0);
}