# libft

### Part 1 LIBC functions
- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- strlcpy
- strlcat
- strchr
- strrchr
- strnstr
- strncmp
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower
- calloc (using malloc)
- strdup (using malloc)

### Part 2 Additional functions
Function | Prototype
-------- | ---------
ft_substr* | char *ft_substr(char const *s, unsigned int start, size_t len);
ft_strjoin* | char *ft_strjoin(char const *s1, char const *s2);
ft_strtrim* | char *ft_strtrim(char const *s1, char const *set);
ft_split* | char **ft_split(char const *s, char c);
ft_itoa* | char *ft_itoa(int n);
ft_strmapi* | char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
ft_putchar_fd | void ft_putchar_fd(char c, int fd);
ft_putstr_fd | void ft_putstr_fd(char *s, int fd);
ft_putendl_fd | void ft_putendl_fd(char *s, int fd);
ft_putnbr_fd | void ft_putnbr_fd(int n, int fd);

*use malloc

### Bonus Part
Function | Prototype
-------- | ---------
ft_lstnew* | t_list *ft_lstnew(void *content);
ft_lstadd_front | void ft_lstadd_front(t_list **alst, t_list *new);
ft_lstsize | int ft_lstsize(t_list *lst);
ft_lstlast | t_list *ft_lstlast(t_list *lst);
ft_lstadd_back | void ft_lstadd_back(t_list **alst, t_list *new);
ft_lstdelone** | void ft_lstdelone(t_list *lst, void (*del)(void*));
ft_lstclear** | void ft_lstclear(t_list **lst, void (*del)(void*));
ft_lstiter | void ft_lstiter(t_list *lst, void (*f)(void *));
ft_lstmap*** | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

*use malloc
**use free
*** use malloc and free
### My Additional functions
Function | Prototype
-------- | ---------
