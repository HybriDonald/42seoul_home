/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 02:39:04 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/28 01:08:08 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_content(void *addr, unsigned int size)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < size)
	{
		c = *((char *)addr + i);
		if (!(c >= 32 && c <= 126))
			write(1, ".", 1);
		else
			write(1, &c, 1);
		i++;
	}
}

void	ft_print_hex(char *hex, unsigned int i,
					unsigned char c, unsigned int size)
{	
	int	index;

	index = 0;
	while (index < 2)
	{
		if (!(i >= size))
		{
			hex[index] = c % 16;
			if (hex[index] < 10)
				hex[index] = hex[index] + '0';
			else
				hex[index] = (hex[index] - 10) + 'a';
			c = c / 16;
		}
		else
			hex[index] = ' ';
		index++;
	}
	while (--index >= 0)
		write(1, &hex[index], 1);
	if (i % 2)
		write(1, " ", 1);
}

void	ft_print_content_hex(void *addr, unsigned int size)
{
	char			hex[2];
	unsigned char	c;
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (!(i >= size))
			c = (unsigned char)*((char *)addr + i);
		ft_print_hex(hex, i, c, size);
		i++;
	}
}

void	ft_print_addr(void *addr)
{
	char	hex[16];
	long	addr_long;
	int		i;

	i = 0;
	addr_long = (long)addr;
	while (addr_long > 0)
	{
		hex[i] = addr_long % 16;
		if (hex[i] < 10)
			hex[i] += '0';
		else
			hex[i] = (hex[i] - 10) + 'a';
		addr_long = addr_long / 16;
		i++;
	}
	while (i < 16)
	{
		hex[i] = '0';
		i++;
	}
	while (--i >= 0)
		write(1, &hex[i], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	print_size;
	unsigned int	index;

	index = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			print_size = 16;
			size -= 16;
		}
		else
		{
			print_size = size;
			size = 0;
		}
		ft_print_addr(addr + index);
		write(1, ": ", 2);
		ft_print_content_hex(addr + index, print_size);
		ft_print_content(addr + index, print_size);
		write(1, "\n", 1);
		index += 16;
	}
	return (addr);
}
