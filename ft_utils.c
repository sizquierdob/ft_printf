/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:56:51 by sizquier          #+#    #+#             */
/*   Updated: 2022/06/04 20:03:51 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_putstr(char	*str)
{
	int	res;

	res = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (*str)
	{
		res += ft_putchar(*str);
		str++;
	}
	return (res);
}

int	ft_putnbr(unsigned int numb)
{
	int	res;

	res = 0;
	if (numb >= 10)
		res = ft_putnbr(numb / 10);
	numb = numb % 10;
	if (numb < 10)
		res += ft_putchar(numb + '0');
	return (res);
}

int	ft_hexa(unsigned long int numb, char chr)
{
	int	res;

	res = 0;
	if (chr == 'x' || chr == 'p')
	{
		if (numb >= 16)
			res = ft_hexa((numb / 16), chr);
		res += ft_putchar("0123456789abcdef"[numb % 16]);
	}
	else if (chr == 'X')
	{
		if (numb >= 16)
			res += ft_hexa((numb / 16), chr);
		res += ft_putchar("0123456789ABCDEF"[numb % 16]);
	}
	return (res);
}

int	ft_putnbrv2(int nb)
{
	int	dest;

	dest = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		dest += write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		dest += ft_putnbr(nb / 10);
	nb = nb % 10;
	if (nb < 10)
		dest += ft_putchar(nb + 48);
	return (dest);
}
