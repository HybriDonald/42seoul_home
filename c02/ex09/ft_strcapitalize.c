/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:59:54 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/27 12:32:54 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	*ft_struplowcase(char *str, int fl)
{
	if (*str >= 'a' && *str <= 'z' && !fl)
		*str = *str - 32;
	else if (*str >= 'A' && *str <= 'Z' && fl)
		*str = *str + 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	fl;

	i = 0;
	fl = 0;
	while (str[i])
	{
		if (ft_is_alpha(str[i]) || ft_str_is_numeric(str[i]))
		{
			ft_struplowcase(&str[i], fl);
			fl = 1;
		}
		else
			fl = 0;
		i++;
	}
	return (str);
}
