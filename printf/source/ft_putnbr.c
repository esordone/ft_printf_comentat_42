/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:31:57 by esordone          #+#    #+#             */
/*   Updated: 2022/10/19 11:35:25 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			ft_putchar('-');
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '0');
	}
	return (1);
}