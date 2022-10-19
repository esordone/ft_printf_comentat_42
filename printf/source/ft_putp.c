/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:56:24 by esordone          #+#    #+#             */
/*   Updated: 2022/10/19 18:43:08 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_putp(unsigned long long n, void *p)
{	
	int	*res;

	res = (int *)p;
	if (n > 15)
			ft_putnbr(n / 16);
	res = ft_putchar(n % 10 + '0');
	return (&res);
}
