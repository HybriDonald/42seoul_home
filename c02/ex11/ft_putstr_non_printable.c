/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 01:53:45 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/27 21:41:01 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}

void	ft_printhex(char c)
{
	int				mod;
	int				index;
	char			hex[2];
	unsigned char	re_c;

	index = 0;
	re_c = (unsigned char)c;
	while (index < 2)
	{
		mod = re_c % 16;
		if (mod < 10)
			hex[index] = mod + '0';
		else
			hex[index] = (mod - 10) + 'a';
		re_c = re_c / 16;
		index++;
	}
	index--;
	write(1, "\\", 1);
	while (hex[index] && index >= 0)
	{
		write(1, &hex[index], 1);
		index--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_str_is_printable(str[i]))
			ft_printhex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
