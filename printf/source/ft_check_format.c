/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:05:43 by esordone          #+#    #+#             */
/*   Updated: 2022/10/19 12:17:32 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_check_format(char const *format, va_list ap)
{
	if (*format == 'c')
	// coje el valor de del argumento de la lista (va_list) y me pone el tipo que le digo)
	// va_arg em permet passar d'un argument a l'altre
		ft_putchar(va_arg(ap, int);
	else if (*format == 's')
		ft_putstr(va_arg(ap, char*); 
	return (1);
}
