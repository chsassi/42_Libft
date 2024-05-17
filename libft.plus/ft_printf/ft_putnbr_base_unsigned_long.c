/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned_long.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:08:53 by chsassi           #+#    #+#             */
/*   Updated: 2024/04/28 18:01:33 by chsassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_base_unsigned_long(unsigned long nbr, char *base, int *length)
{
	size_t	base_len;

	base_len = xstrlen(base);
	if (nbr >= base_len)
		ft_putnbr_base_unsigned_long(nbr / base_len, base, length);
	if ((nbr % base_len) < 10)
		ft_putchar((nbr % base_len) + '0', length);
	else
		ft_putchar(base[nbr % base_len], length);
}

/* int main()
{
	unsigned long number = 4242424242424242;
	int length = 0;

	ft_putnbr_base_unsigned_long(number, BASE10, &length);
} */
