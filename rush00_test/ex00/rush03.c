/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:34:04 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/11 15:45:04 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_head(int x)
{
	int	i;

	ft_putchar('A');
	i = 1;
	if (x != 1)
	{
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_body(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	if (y != 1)
	{
		while (j < y - 1)
		{
			ft_putchar('B');
			i = 1;
			while (i < x - 1)
			{
				ft_putchar(' ');
				i++;
			}
			if (x != 1)
			{
				ft_putchar('B');
			}
			ft_putchar('\n');
			j++;
		}
	}
}

void	print_foot(int x)
{
	int	i;

	ft_putchar('A');
	i = 1;
	if (x != 1)
	{
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(x, y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_head(x);
	if (y != 1)
	{
		print_body(x, y);
		print_foot(x);
	}
}
