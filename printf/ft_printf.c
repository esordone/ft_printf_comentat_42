/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:59:42 by esordone          #+#    #+#             */
/*   Updated: 2022/10/19 11:08:29 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			res = res + ft_check_format(format, ap);
			/*aci cal fer el check del format i asignar el seu valor a res*/
		}
		else
		{
			res = res + ft_putchar(format[i]);
		}
		i++;	
	}
	va_end(ap);
	return (res);
}