/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:45 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/15 15:31:24 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"


int	ft_formatos(va_list args, const char variavel)
{
	int	print_length;

	print_length = 0;
	if (variavel == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (variavel == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (variavel == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (variavel == 'd' || variavel == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (variavel == 'u')
		print_length += ft_printnbru(va_arg(args, unsigned int));
	else if (variavel == 'x' || variavel == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), variavel);
	else if (variavel == '%')
		print_length += ft_printmodule();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formatos(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}

