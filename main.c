#include <stdio.h>

int main(int argc, char const *argv[])
{
  char  *str = "12345";
  char  *str2 = "ABCDEF";
  char  *ptr;
 
  printf ("Adresse: str [%p], str2 [%p]\n", str, str2);
  printf("%s\n", str2);
  str2 = malloc(500);
  free(str2);
  printf("%s\n", str2);
  printf ("Adresse: str [%p], str2 [%p]\n", str, str2);
  return 0;
}