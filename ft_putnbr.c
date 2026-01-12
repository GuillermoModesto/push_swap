/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:27:32 by guantino          #+#    #+#             */
/*   Updated: 2025/11/13 11:31:25 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int num)
{
	size_t	len;

	len = 0;
	if (num == -2147483648)
		return (ft_putstr("-2147483648"));
	if (num == 0)
		return (ft_putchar('0'));
	if (num < 0)
	{
		num *= (-1);
		len += ft_putchar('-');
	}
	if (num >= 10)
		len += ft_putnbr(num / 10);
	len += ft_putchar((num % 10) + '0');
	return (len);
}
