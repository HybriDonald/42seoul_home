/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:36:39 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/22 12:40:01 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_write_comb2(int num1, int num2);
void	ft_write(char c);

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb2(int num1, int num2)
{
	char	c1;
	char	c2;

	c1 = num1 / 10 + '0';
	c2 = num1 % 10 + '0';
	ft_write(c1);
	ft_write(c2);
	ft_write(' ');
	c1 = num2 / 10 + '0';
	c2 = num2 % 10 + '0';
	ft_write(c1);
	ft_write(c2);
	if(!(num1 == 98 && num2 == 99))
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int num2;

	num1 = 0;
	num2 = 0;
	while (1)
	{
		while ( ++num2 <= 99)
		{
			ft_write_comb2(num1, num2);
		}
		num1++;
		num2 = num1;
		if (num1 > 98)
		{
			 break ;
		}
	}
}
