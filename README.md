# libft

### Part 1 LIBC functions
Function | Description
------------ | -------------
memset
bzero
memcpy
memccpy
memmove
memchr
memcmp
strlen
strlcpy
strlcat
strchr
strrchr
strnstr
strncmp
atoi
isalpha
isdigit
isalnum
isascii
isprint
toupper
tolower
calloc (using malloc)
calloc (using malloc)
### Part 2 Additional functions
Function | Prototype | Description
-- | ----------- | --
ft_substr | char *ft_substr(char const *s, unsigned int start, size_t len); | Allocates (with malloc(3)) and returns a substring from the string given in argument. The substring begins at index ’start’ and is of maximum size ’len’
ft_strjoin | char *ft_strjoin(char const *s1, char const *s2); | Allocates (with malloc(3)) and returns a new string, result of the concatenation of s1 and s2.
ft_strtrim | char *ft_strtrim(char const *s1, char const *set); | Allocates (with malloc(3)) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string.
ft_split | char **ft_split(char const *s, char c); | Allocates (with malloc(3)) and returns an array of strings obtained by splitting s using the character c as a delimiter. The array must be ended by a NULL pointer.
ft_itoa | char *ft_itoa(int n); | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
ft_strmapi | char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); | Applies the function f to each character of the string passed as argument to create a new string (with malloc(3)) resulting from successive applications of f.
ft_putchar_fd | void ft_putchar_fd(char c, int fd); | Outputs the character c to given file descriptor.
ft_putstr_fd | void ft_putstr_fd(char *s, int fd); | Outputs the string c to given file descriptor.
ft_putendl_fd | void ft_putendl_fd(char *s, int fd); | Outputs the string c to given file descriptor, followed by a newline.
ft_putnbr_fd | void ft_putnbr_fd(int n, int fd); | void ft_putnbr_fd(int n, int fd); | Outputs the integer n to given file descriptor.

### Bonus Part
Function | Description
------------ | -------------
ft_lstnew |
ft_lstadd_front |
ft_lstsize |
ft_lstlast |
ft_lstadd_back |
ft_lstdelone |
ft_lstclear |
ft_lstiter |
ft_lstmap |


### My Additional functions
Function | Description
