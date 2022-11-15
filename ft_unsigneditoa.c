#include "libft.h"

char	*ft_lenret(unsigned long long n, char *str)
{
	if (n >= 10)
		str = ft_lenret(n / 10, str);
	*str++ = (n % 10) + '0';
	*str = 0;
	return (str);
}

char	*ft_itoa(unsigned long long n)
{
	char	str[32];

	if (n < 0)
	{
		str[0] = '-';
		ft_lenret(((unsigned long long)n * -1), &str[1]);
	}
	else
		ft_lenret(n, str);
	return (ft_substr(str, 0, (ft_strlen(str))));
}
