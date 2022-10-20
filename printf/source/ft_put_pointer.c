/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:46:08 by esordone          #+#    #+#             */
/*   Updated: 2022/10/20 12:34:44 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*int	ft_count_hexa(unsigned long long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		n = n / 16;
		i++;
	}
	//conte el len del numero hexadecimal
	return (i);
}

char	*ft_convert_hexa_a_str(char *stre, unsigned long long n)
{
	int	size;
	char	*str;

	size = ft_count_hexa(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	while (size > 0)
	{
		str[size - 1] = stre[n % 16];
		n = n / 16;
		size--;
	}
	return (str);
}
*/
int	ft_put_pointer(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
		len = len + (write(1, "0", 1));
	else
	{
		if (p >= 16)
		{
			len = len + (ft_put_pointer(p / 16));
			len = len + (ft_put_pointer(p % 16));
		}
		else
		{
			if (p < 10)
				len = len + (ft_putchar(p + '0'));
			else
				len = len + (ft_putchar((p - 10) + 'a'));
		}
	}
	return (len);
}
