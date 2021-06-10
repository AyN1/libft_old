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
	char *str1 = "+9223372036854775802";
	char *str2 = "+9223372036854775803";
	char *str3 = "+9223372036854775804";
	char *str4 = "+9223372036854775805";
	char *str5 = "+9223372036854775806";
	char *str6 = "+9223372036854775807";
	char *str7 = "+9223372036854775808";
	char *str8 = "+9223372036854775809";
	char *str9 = "+9223372036854775810";

	char *str1_n = "-9223372036854775802";
	char *str2_n = "-9223372036854775803";
	char *str3_n = "-9223372036854775804";
	char *str4_n = "-9223372036854775805";
	char *str5_n = "-9223372036854775806";
	char *str6_n = "-9223372036854775807";
	char *str7_n = "-9223372036854775808";
	char *str8_n = "-9223372036854775809";
	char *str9_n = "-9223372036854775810";

	char *str1_s = "-0";
	char *str2_s = "\t\v\n\r\f +0";
	char *str3_s = "\t\v\n\r\f +-0";
	char *str4_s = "\t\v\n\r\f +-0";
	char *str5_s = "\t\v\n\r\f 0";
	char *str6_s = "\t\v\n\r\f +9223372036854775807";
	char *str7_s = "\t\v\n\r\f +9223372036854775808";
	char *str8_s = "\t\v\n\r\f +9223372036854775809";
	char *str9_s = "234302492309423402034208342038423048";



	printf("1return = [%ld]\n", F(str1));
	printf("2return = [%ld]\n", F(str2));
	printf("3return = [%ld]\n", F(str3));
	printf("4return = [%ld]\n", F(str4));
	printf("5return = [%ld]\n", F(str5));
	printf("6return = [%ld]\n", F(str6));
	printf("7return = [%ld]\n", F(str7));
	printf("8return = [%ld]\n", F(str8));
	printf("9return = [%ld]\n", F(str9));

	printf("1return = [%ld]\n", F(str1_n));
	printf("2return = [%ld]\n", F(str2_n));
	printf("3return = [%ld]\n", F(str3_n));
	printf("4return = [%ld]\n", F(str4_n));
	printf("5return = [%ld]\n", F(str5_n));
	printf("6return = [%ld]\n", F(str6_n));
	printf("7return = [%ld]\n", F(str7_n));
	printf("8return = [%ld]\n", F(str8_n));
	printf("9return = [%ld]\n", F(str9_n));

	printf("1return = [%ld]\n", F(str1_s));
	printf("2return = [%ld]\n", F(str2_s));
	printf("3return = [%ld]\n", F(str3_s));
	printf("4return = [%ld]\n", F(str4_s));
	printf("5return = [%ld]\n", F(str5_s));
	printf("6return = [%ld]\n", F(str6_s));
	printf("7return = [%ld]\n", F(str7_s));
	printf("8return = [%ld]\n", F(str8_s));
	printf("9return = [%ld]\n", F(str9_s));
	return (0);
}
