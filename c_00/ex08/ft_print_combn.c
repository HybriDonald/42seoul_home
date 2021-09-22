/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:17:58 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/22 13:24:00 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_write_comb(char comb[3])
{
	if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
	{
		write(1, &comb[0], 1);
		write(1, &comb[1], 1);
		write(1, &comb[2], 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
	else
	{
		write(1, &comb[0], 1);
		write(1, &comb[1], 1);
		write(1, &comb[2], 1);
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];
	int		i;

	i = 0;
	while (i <= n - 1)
	{
		comb[i] = i + '0';
		if (i == n - 1)
		{
			comb[i] = (i - 1) + '0';
		}
		i++;
	}

	while (1)
	{
		while (++comb[2] <= '9')
		{
			ft_write_comb(comb);
		}
		if (++comb[1] <= '8')
		{
			comb[2] = comb[1];
		}
		else if (++comb[0] <= '7')
		{
			comb[1] = comb[0] + 1;
			comb[2] = comb[1];
		}
		else
		{
			break ;
		}
	}
}
