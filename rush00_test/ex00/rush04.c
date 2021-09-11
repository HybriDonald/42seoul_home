/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:34:04 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/11 14:29:13 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar( char c );	// Prototype of function ft_putchar( char c ); include ft_putchar.c

void print_head( int x )	// Print top
{
	ft_putchar('A');

	if(x != 1)
	{
		for(int i = 1; i < x-1; i++)
		{
			ft_putchar('B');
		}
		ft_putchar('C');
	}

	ft_putchar('\n');
}

void print_body( int x, int y)	// Print middle
{
	if(y != 1)
	{
		for(int j = 1; j < y - 1; j++)
		{
			ft_putchar('B');
			for(int i = 1; i < x-1 ; i++)
			{
				ft_putchar(' ');
			}

			ft_putchar('B');
			ft_putchar('\n');
		}
	}
}

void print_foot( int x )	// print bottom
{
	ft_putchar('C');

	if(x != 1)
	{
		for(int i = 1; i < x-1; i++)
		{
			ft_putchar('B');
		}
		ft_putchar('A');
	}

	ft_putchar('\n');
}

void rush(x, y)
{
	if(x <= 0 || y <= 0)
	{
		return;
	}

	print_head(x);

	if(y != 1)
	{
		print_body(x, y);
		print_foot(x);
	}
}
