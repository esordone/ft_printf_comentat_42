/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:50:22 by esordone          #+#    #+#             */
/*   Updated: 2022/10/20 12:20:53 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar(char c)
{
	//el valor de retorn de write es size_t
	//com nomes escriu un bite si no es 1, falla i ha de tornar -1
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}
