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
ft_split*** | char **ft_split(char const *s, char c);
ft_itoa* | char *ft_itoa(int n);
ft_strmapi* | char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
ft_putchar_fd | void ft_putchar_fd(char c, int fd);
ft_putstr_fd | void ft_putstr_fd(char *s, int fd);
ft_putendl_fd | void ft_putendl_fd(char *s, int fd);
ft_putnbr_fd | void ft_putnbr_fd(int n, int fd);

*use malloc
***use malloc and free

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
***use malloc and free
### My Additional functions
Function | Prototype
-------- | ---------

### Explications...
- memset: Écrit X fois un caractère dans une string. Exemple: initialiser un buffer avec des ‘\0’
- bzero: écrase N octets de données du pointeur *s. Exemple: initialiser un buffer avec des ‘\0’
- memcpy: Copie X nombre d’octets d’un endroit a un autre.
- memccpy: Copie X bytes de SRC a DST si le caractère C occure dans DST alors le copie stop sinon on continue jusqu à Noctets.
- memmove: Copie X octets de la string SRC dans un buffer puis du BUFFER a DST. Mieux que MEMCPY quand les adresse se cevauchent (overlap). Si SRC et DST ont la même adresse alors utiliser memmove.
- memchr et strchr:  strchr stops when it hits a null character but memchr does not; this is why the former does not ned a length parameter but MEMCHR does.
- strcmp: compare 2 strings jusqu’a ‘\0’
- strncmp: compare 2 strings jusqu’a N ou ‘\0’
- memcmp: compare 2 strings jusqu’a N.
- strlen: Compte le nombre de caractères d’une string.
- strdup: Alloue la mémoire nécessaire pour la string et retourne un pointeur sur elle. Ensuite on peut la free.
- strcpy: Copie la string SRC dans DST en incluant le ‘\0’
- strncpy: Copie N caractere de SRC dans DST si SRC est plus petit que N alors le reste de DST est rempli de ‘\0’. Sinon DST n’est pas terminé par un ‘\0’:
- strcat: Ajoute S2 a la fin de S1. S1 doit avoir suffisamment d’espace pour contenir S1 et S2. Retourne un pointeur sur S1.
- strncat: Ajoute pas plus de N caractère de S2 a S1 et ensuite ajoute un ‘\0’;
- strlcat :
- strrchr: renvois un pointeur au caractère localisé. Ici le dernier caractère de la string.
- strstr: Cherche si S2 ce trouve dans S1, si oui elle retourne un pointeur du début de l’occurence de S2 dans S1. Si aucune occurrence n’est trouvé STRSTR renvoie un pointeur NULL.

- strnstr:
- atoi: convertit la portion initial de la chaine de caractere en INT. sinon elle retourne 0.
- isalpha: est-ce que c’est une lettre ? Si non retourne 0
- isdigit: est-ce que c’est un chiffre ? Si non retourne 0
- isalnum: Est-ce que c’est un chiffre ou une lettre ? si non retourne 0
- isascii: Si c’est un caractere ASCII ? Si non retourne 0.
- isprint: est-ce que la caractere est affichable ? Si non retourne 0.
- toupper: Change une lettre minuscule en majuscule.
- tolower: Change lettre MAJ en MIN.


### LIBFT part 2:
- Ft_memalloc: Alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.

- Ft_memdel: Prend en paramètre l’adresse d’un pointeur dont la zone pointée doit être libérée avec free(3), puis le pointeur est mis à NULL.

- Ft_strnew: Alloue (avec malloc(3)) et retourne une chaîne de caractère “fraiche” terminée par un ’\0’. Chaque caractère de la chaîne est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL.

- Ft_strdel: Prend en paramètre l’adresse d’une chaîne de caractères qui doit être libérée avec free(3) et son pointeur mis à NULL.

- Ft_strclr: Assigne la valeur ’\0’ à tous les caractères de la chaîne passée en paramètre.

