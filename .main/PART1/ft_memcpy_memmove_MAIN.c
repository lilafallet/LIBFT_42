#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str1[100] = "hello";
	char	str2[100] = "hello";
	char	str3[100] = "hello";
	char	str4[100] = "hello";
	char	str5[100] = "hello";
	char	str6[100] = "hello";
	char	str7[100] = "hello";
	char	str8[100] = "hello";

	ft_memcpy(str1, str1 + 3, 0); 
	memmove(str2, str2 + 3, 0); 
	ft_memcpy(str3 + 3, str3, 0); 
	memmove(str4 + 3, str4, 0); 
	printf("OK memcpy de str+3 = %s\n", str1); 
	printf("OK memmove de str+3 = %s\n", str2); 
	printf("OK memcpy de str = %s\n", str3); 
	printf("OK memmove de str = %s\n", str4); 
	ft_memcpy(str5, str5 + 3, 0); 
	ft_memmove(str6, str6 + 3, 0); 
	ft_memcpy(str7 + 3, str7, 0); 
	ft_memmove(str8 + 3, str8, 0); 
	printf("\n   memcpy de str+3 = %s\n", str5); 
	printf("   memmove de str+3 = %s\n", str6); 
	printf("   memcpy de str = %s\n", str7); 
	printf("   memmove de str = %s\n", str8); 
	return (EXIT_SUCCESS);
}
