/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:46:46 by guantino          #+#    #+#             */
/*   Updated: 2025/11/12 17:51:43 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexnbr(unsigned long num, int cap)
{
	size_t	len;
	char	*base;

	len = 0;
	if (cap)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		len += ft_puthexnbr(num / 16, cap);
	len += ft_putchar(base[num % 16]);
	return (len);
}
