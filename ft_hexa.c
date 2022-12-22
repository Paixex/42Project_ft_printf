/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:36:56 by digil-pa          #+#    #+#             */
/*   Updated: 2022/12/22 13:51:38 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_hexa(unsigned long int k, const char *c)
{
	int	size;

	size = 0;
	if (c >= 16)
		size += ft_hexa(k / 16, c);
	size += ft_putchar_len(c[k % 16], len);
	return (size);
}
*/

void	ft_hexa(unsigned long int x, char x_or_x, int *len)
{
	char	str[25];
	char	*base;
	int		i;

	if (x_or_x == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (x != 0)
	{
		str[i] = base[x % 16];
		x /= 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(str[i], len);
	}
}
