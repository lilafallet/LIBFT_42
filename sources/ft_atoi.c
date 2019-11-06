#include <stdlib.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	int		result;

	result = 0;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (str[0] == '-' ? -result : result);
}
