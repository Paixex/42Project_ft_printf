/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:36:56 by digil-pa          #+#    #+#             */
/*   Updated: 2022/12/08 15:16:09 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned long int k, const char *c)
{
	int	size;
	
	size = 0;
	if (c >= 16)
		size += ft_hexa(k /16, c);
	size += ft_putchar_len(c[k % 16]);
	return (size);
}
