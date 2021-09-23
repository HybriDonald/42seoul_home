/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:17:58 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/23 21:46:09 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_write_comb(char *comb, int n, int index, int start);

void	ft_write_comb(char *comb, int n, int index, int start)
{
	while (1)
	{
		comb[index] = start + '0';
		if (comb[0] > 10 - n + '0')
			return ;
		if (!(index == n - 1))
			ft_write_comb(comb, n, index + 1, start + 1);
		if (start <= 9)
		{
			if (index <= n - 2)
			{
				ft_write_comb(comb, n, index, start + 1);
				return ;
			}
			write(1, comb, n);
			if (comb[0] == 10 - n + '0')
				return ;
			write(1, ", ", 2);
			ft_write_comb(comb, n, index, start + 1);
			break ;
		}
		else
			return ;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n <= 0 || n >= 10)
	{
		write(1, "ERROR\n", 6);
		return ;
	}
	ft_write_comb(comb, n, 0, 0);
}
