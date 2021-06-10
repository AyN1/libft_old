make
gcc main2.c libft.a -I ./inc -o original
gcc main2.c libft.a -I ./inc -D FT_ATOLL -o ft
./original > original.txt
./ft > ft.txt
diff -y -s -a --suppress-common-lines ft.txt original.txt
rm original ft
