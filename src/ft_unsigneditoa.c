/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigneditoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:54 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/15 15:26:38 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ft_lenretu(unsigned long long n, char *str)
{
	if (n >= 10)
		str = ft_lenretu(n / 10, str);
	*str++ = (n % 10) + '0';
	*str = 0;
	return (str);
}

char	*ft_itoau(unsigned long long n)
{
	char	str[32];

	ft_lenretu(n, str);
	return (ft_substr(str, 0, (ft_strlen(str))));
}

int	ft_printnbru(unsigned n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoau(n);
	len = ft_putstr(num);
	return (len);
}
