/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:05:43 by esordone          #+#    #+#             */
/*   Updated: 2022/10/19 16:07:56 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_check_format(char format, va_list ap)
{
	int	res;

	res = 0;
	if (format == 'c')
		res = ft_putchar(va_arg(ap, int));
	// coje el valor de del argumento de la lista (va_list) y me pone el tipo que le digo)
	// va_arg em permet passar d'un argument a l'altre
	else if (format == 's')
		res = ft_putstr(va_arg(ap, char*));
	else if (format == 'p')
		res = ft_(va_arg(ap, unsigned long long));
	else if (format == '%')
		res = write(1, "%", 1);
	return (res);
}
