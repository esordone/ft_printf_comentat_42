/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:50:38 by esordone          #+#    #+#             */
/*   Updated: 2022/10/20 12:22:23 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_put_pointer(unsigned long long p);
int		ft_putnbr(int n);
int		ft_check_format(char format, va_list ap);

#endif
