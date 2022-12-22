/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:27:07 by digil-pa          #+#    #+#             */
/*   Updated: 2022/12/22 12:13:01 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsignednbr(unsigned int k, int *len)
{
	if (k > 9)
		ft_unsignednbr(k / 10, len);
	ft_putchar_len(k % 10 + '0', len);
}
