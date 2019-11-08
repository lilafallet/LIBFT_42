#include <stdio.h> //DEBUG
#include <stdlib.h>

void	ft_init_str(int n, char *str, int *i)
{
	if (n < 0)
	{
		str[*i] = '-';
		(*i)++;
		ft_init_str(-n, str, i);
	}
	else if(n >= 10)
	{
		ft_init_str(n / 10, str, i);
		ft_init_str(n % 10, str, i);
	}
	else
	{
		str[*i] = n + 48;
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		tmp;
	size_t	mult;
	size_t	size;
	int		i;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	mult = 1;
	size = -1;
	while (tmp != 0)
	{
		tmp = n;
		tmp = tmp / (mult);
		mult = mult * 10;
		size++;
	}
	str = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	ft_init_str(n, str, &i);
	str[size] = '\0';
	return (str);
}
