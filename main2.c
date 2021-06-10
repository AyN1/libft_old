#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef FT_ATOLL
#define F(str) ft_atol(str)
#else
#define F(fmt) atol(fmt)
#endif

int	main(void)
{
	char *str1 = "9223372036854775802";
	char *str2 = "9223372036854775803";
	char *str3 = "9223372036854775804";
	char *str4 = "9223372036854775805";
	char *str5 = "9223372036854775806";
	char *str6 = "9223372036854775807";
	char *str7 = "9223372036854775808";
	char *str8 = "9223372036854775809";
	char *str9 = "9223372036854775810";



	printf("1return = [%ld]\n", F(str1));
	printf("2return = [%ld]\n", F(str2));
	printf("3return = [%ld]\n", F(str3));
	printf("4return = [%ld]\n", F(str4));
	printf("5return = [%ld]\n", F(str5));
	printf("6return = [%ld]\n", F(str6));
	printf("7return = [%ld]\n", F(str7));
	printf("8return = [%ld]\n", F(str8));
	printf("9return = [%ld]\n", F(str9));
	return (0);
}
