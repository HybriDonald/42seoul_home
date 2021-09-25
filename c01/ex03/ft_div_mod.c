/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghon <seonghon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:14:25 by seonghon          #+#    #+#             */
/*   Updated: 2021/09/25 17:37:33 by seonghon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_div(int a, int b, int result, int *div);
void	ft_mod(int a, int b, int result, int *mod);

void	ft_div(int a, int b, int result, int *div)
{
	result = a / b;
	*div = result;
}

void	ft_mod(int a, int b, int result, int *mod)
{
	result = a % b;
	*mod = result;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;

	result = 0;
	ft_mod(a, b, result, mod);
	ft_div(a, b, result, div);
}
