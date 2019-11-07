#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

void	*ft_fredmemcpy(void *, void *, size_t);

int	main(void)
{
	char	str1[100] = "bonjour";
	char	str2[100] = "bonjour";
	char	str3[100] = "bonjour";
	char	str4[100] = "bonjour";
	char	str5[100] = "bonjour";
	char	str6[100] = "bonjour";
	char	str7[100] = "bonjour";
	char	str8[100] = "bonjour";

	ft_fredmemcpy(str1, str1 + 3, 4); 
	memmove(str2, str2 + 3, 4); 
	ft_fredmemcpy(str3 + 3, str3, 4); 
	memmove(str4 + 3, str4, 4); 
	printf("OK memcpy de str+3 = %s\n", str1); 
	printf("OK memmove de str+3 = %s\n", str2); 
	printf("OK memcpy de str = %s\n", str3); 
	printf("OK memmove de str = %s\n", str4); 
	ft_memcpy(str5, str5 + 3, 4); 
	ft_memmove(str6, str6 + 3, 4); 
	ft_memcpy(str7 + 3, str7, 4); 
	ft_memmove(str8 + 3, str8, 4); 
	printf("\n   memcpy de str+3 = %s\n", str5); 
	printf("   memmove de str+3 = %s\n", str6); 
	printf("   memcpy de str = %s\n", str7); 
	printf("   memmove de str = %s\n", str8); 
	return (EXIT_SUCCESS);
}
