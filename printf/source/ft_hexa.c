/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:53:58 by esordone          #+#    #+#             */
/*   Updated: 2022/10/21 13:06:12 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_hexa(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		n = n / 16;
		len++;
	}
	printf("El len de n es |%d|\n", len);
	return (len);
}

int	ft_hexa(unsigned int n)
{
	int	res;

	res = 0;
	if (n == 0)
		res = res + (write(1, "0", 1));
	else
	{
		if (n > 16)
		{
			res = res + (ft_hexa(n / 16));
			res = res + (ft_hexa(n % 16));
			printf("Ara res val |%d|\n", res);
		}
		else 
		{
			if (n <= 9)
			{
			res = res + (ft_putchar(n + '0'));
			printf("N es mes menut o igual que 9, ara res val |%d|\n", res);
			}
			else
			{
			res = res + (ft_putchar(n - 10) + 'a');
			printf("N es 10 o mes gran, ara res val |%d|\n", res);
			}
		}
	}
	return (res);	
}

int	main(void)
{
	printf("el resultat final es |%d|\n", ft_hexa(20));
	return (0);
}
