# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abicer <abicer@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/14 15:35:09 by abicer            #+#    #+#              #
#    Updated: 2020/10/21 03:13:26 by abicer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

INCLUDE = libft.h

CC =	clang
CFLAGS =	-Wall -Werror -Wextra

SRC_P1 = 	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c \
			ft_strchr.c  ft_strdup.c ft_strlcat.c ft_strlen.c  ft_strncmp.c  \
			ft_strnstr.c ft_strrchr.c  ft_memset.c ft_memmove.c ft_memcpy.c \
			ft_memcmp.c ft_memccpy.c ft_memchr.c ft_calloc.c ft_strlcpy.c

SRC_P2 =	ft_itoa.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_strsub.c ft_strtrim.c ft_split.c \
			ft_strjoin.c ft_strmapi.c ft_substr.c

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

SRC_PERSO = ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strncat.c ft_strncpy.c \
			ft_strstr.c ft_putstr.c \
			ft_memalloc.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_strnew.c \
			ft_strnequ.c ft_strequ.c ft_striter.c ft_striteri.c \
			ft_strdel.c ft_strmap.c ft_strclr.c ft_memdel.c ft_countword.c \
			ft_strtolower.c ft_strtoupper.c ft_iswhitespace.c

OBJ =	$(SRC_P1:.c=.o) $(SRC_P2:.c=.o) $(SRC_PERSO:.c=.o)

BONUSOBJ = $(SRC_BONUS:.c=.o)

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	@echo "Création de $(NAME) en cours..."
	@ar rcs $(NAME) $(OBJ)

bonus: $(BONUSOBJ) $(INCLUDE)
		@echo "Ajout des bonus en cours..."
		@ar rcs $(NAME) $(BONUSOBJ)

clean:
	@echo "Suppression des objets"
	@/bin/rm -f $(OBJ) $(BONUSOBJ)

fclean: clean
	@echo "Suppression de $(NAME)"
	@/bin/rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
