gcc main.c ft_atoi.c ft_iswhitespace.c ft_isdigit.c -o original
gcc main.c ft_atoi.c ft_iswhitespace.c ft_isdigit.c -D FT_ATOI -o ft
./original > original.txt
./ft > ft.txt
diff -a --suppress-common-lines ft.txt original.txt
rm original ft
