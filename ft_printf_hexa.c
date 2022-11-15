/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:34:04 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/15 11:52:09 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_hexlen(unsigned int n)
{
	size_t	i;

	i = 0;
	while (i <= n)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

void	ft_puthexa(unsigned int n, const char ft)
{
	if (n >= 16)
	{
		ft_puthexa(n / 16, ft);
		ft_puthexa(n % 16, ft);
	}
	if (n < 10)
	{
		ft_putchar_fd((n + '0'), 1);
	}
	else
	{
		if (ft == 'x')
			ft_putchar_fd((n - 10 + 'a'), 1);
		if (ft == 'X')
			ft_putchar_ft((n - 10 + 'A'), 1);
	}
}

int	ft_printhexa(unsigned int n, const char ft)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(n, ft);
	return (ft_hex_len(n));	
}

/* int main()
{
	int i;
	i = 10;
	ft_printhexa(10, 'a');
	
} */