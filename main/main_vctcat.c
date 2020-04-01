//pensez a mettre le include

#include "vector.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_vector	*vct1;
	t_vector	*vct2;
	t_vector	*vct3;
	t_vector	*vct4;
	t_vector	*vct5;
	t_vector	*vct6;
	t_vector	*vct7;
	t_vector	*vct8;

	if (ac == 9)
	{
		vct1 = vct_new();
		vct2 = vct_new();
		vct3 = vct_new();
		vct4 = vct_new();
		vct5 = vct_new();
		vct6 = vct_new();
		vct7 = vct_new();
		vct8 = vct_new();
		vct_addstr(vct1, av[1]);
		vct_addstr(vct2, av[2]);
		vct_addstr(vct3, av[3]);
		vct_addstr(vct4, av[4]);
		vct_addstr(vct5, av[5]);
		vct_addstr(vct6, av[6]);
		vct_addstr(vct7, av[7]);
		vct_addstr(vct8, av[8]);
		vct_cat(vct1, vct2);
		vct_cat(vct3, vct4);
		vct_cat(vct5, vct6);
		vct_cat(vct7, vct8);
		vct_printendl(vct1);
		vct_printendl(vct3);
		vct_printendl(vct5);
		vct_printendl(vct7);
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		vct_del(&vct5);
		vct_del(&vct6);
		vct_del(&vct7);
		vct_del(&vct8);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
