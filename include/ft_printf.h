/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:14:41 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/15 15:31:18 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printhexa(unsigned int n, const char ft);
void	ft_puthexa(unsigned int n, const char ft);
int		ft_hexlen(unsigned int n);
int		ft_print_ptr(unsigned long long ptr);
char	*ft_itoau(unsigned long long n);
int		ft_formatos(va_list args, const char variavel);
int		ft_printmodule(void);
int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_printnbr(int n);
int		ft_putstr(char *str);
int		ft_printnbru(unsigned n);
int		ft_printnbrh(unsigned n);
void	ft_putnbr_base(int nbr, char *base);
int		ft_print_hex(unsigned int numero, const char variavel);

#endif