/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:40:22 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/25 17:34:31 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_print_nbr(char *c, int i);

void	ft_print_nbr(char *c, int i)
{
	while (c[i])
	{
		write(1, &c[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;
	char			c[10];
	int				i;

	i = 0;
	nbr = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb * (-1);
	}
	while (nbr > 0)
	{
		c[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	i--;
	ft_print_nbr(c, i);
}
