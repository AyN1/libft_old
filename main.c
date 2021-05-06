#include <stdio.h>
#include "libft.h"

#ifdef FT_ATOI
#define F(str) ft_atoi(str)
#else
#define F(fmt) atoi(fmt)
#endif

int	main(void)
{
  printf("%d\n", F("27"));
	printf("%d\n", F("0"));
	printf("%d\n", F("1"));
	printf("%d\n", F("2147483647"));
	printf("%d\n", F("2147483648"));
	printf("%d\n", F("2147483649"));
	printf("%d\n", F("-2147483647"));
	printf("%d\n", F("-2147483648"));
	printf("%d\n", F("-2147483649"));
	printf("%d\n", F("+-2147483647"));
	printf("%d\n", F("+-2147483648"));
	printf("%d\n", F("+-2147483649"));
	printf("%d\n", F("-+2147483647"));
	printf("%d\n", F("-+2147483648"));
	printf("%d\n", F("-+2147483649"));
	printf("%d\n", F("zczsc2147483647"));
	printf("%d\n", F("zsczsc2147483648"));
	printf("%d\n", F("sefsefsef2147483649"));
	return (0);
}

// int main(int argc, char const *argv[])
// {
//   char  *str = "12345";
//   char  *str2 = "ABCDEF";
//   char  *ptr;

//   printf ("Adresse: str [%p], str2 [%p]\n", str, str2);
//   printf("%s\n", str2);
//   str2 = malloc(500);
//   free(str2);
//   printf("%s\n", str2);
//   printf ("Adresse: str [%p], str2 [%p]\n", str, str2);
//   return 0;
// }
