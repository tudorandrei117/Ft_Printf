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
