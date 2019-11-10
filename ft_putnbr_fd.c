#include <unistd.h>
#include <limits.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb, fd);
	}
	else if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
