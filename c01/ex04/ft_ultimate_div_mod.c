/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 01:20:28 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/25 17:38:33 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod_result;
	int	div_result;

	mod_result = 0;
	div_result = 0;
	mod_result = *a % *b;
	div_result = *a / *b;
	*a = div_result;
	*b = mod_result;
	return ;
}
