/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:17:58 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/15 17:35:11 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char c1, c2, c3;

	c1 = 0;
	c2 = 1;
	c3 = 2;

	if (c1 != c2 && c1 != c3 && c2 != c3)
	{
		while(c3 <= 9)
		{
			write(1, &c1, 1);
			write(1, &c2, 1);
			write(1, &c3, 1);
			c3++;
		}
	}
}
