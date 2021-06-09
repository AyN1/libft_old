# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abicer <abicer@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/14 15:35:09 by abicer            #+#    #+#              #
#    Updated: 2021/06/09 20:00:54 by abicer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

INCLUDE = inc/libft.h

CC =	clang
CFLAGS =	-Wall -Werror -Wextra -I./inc

SRC_LST =	src/lst/ft_lstadd_back_bonus.c \
			src/lst/ft_lstadd_front_bonus.c \
			src/lst/ft_lstclear_bonus.c \
			src/lst/ft_lstdelone_bonus.c \
			src/lst/ft_lstiter_bonus.c \
			src/lst/ft_lstlast_bonus.c \
			src/lst/ft_lstmap_bonus.c \
			src/lst/ft_lstnew_bonus.c \
			src/lst/ft_lstsize_bonus.c

SRC_MEM =	src/mem/ft_bzero.c \
			src/mem/ft_calloc.c \
			src/mem/ft_memalloc.c \
			src/mem/ft_memccpy.c \
			src/mem/ft_memchr.c \
			src/mem/ft_memcmp.c \
			src/mem/ft_memcpy.c \
			src/mem/ft_memdel.c \
			src/mem/ft_memmove.c \
			src/mem/ft_memset.c

SRC_OUT = 	src/out/ft_putchar.c \
			src/out/ft_putchar_fd.c \
			src/out/ft_putendl.c \
			src/out/ft_putendl_fd.c \
			src/out/ft_putnbr.c \
			src/out/ft_putnbr_fd.c \
			src/out/ft_putstr.c \
			src/out/ft_putstr_fd.c

SRC_STR =	src/str/ft_split.c \
			src/str/ft_strcat.c \
			src/str/ft_strchr.c \
			src/str/ft_strclr.c \
			src/str/ft_strcmp.c \
			src/str/ft_strcpy.c \
			src/str/ft_strdel.c \
			src/str/ft_strdup.c \
			src/str/ft_strequ.c \
			src/str/ft_striter.c \
			src/str/ft_striteri.c \
			src/str/ft_strjoin.c \
			src/str/ft_strlcat.c \
			src/str/ft_strlcpy.c \
			src/str/ft_strlen.c \
			src/str/ft_strmap.c \
			src/str/ft_strmapi.c \
			src/str/ft_strncat.c \
			src/str/ft_strncmp.c \
			src/str/ft_strncpy.c \
			src/str/ft_strndup.c \
			src/str/ft_strnequ.c \
			src/str/ft_strnew.c \
			src/str/ft_strnstr.c \
			src/str/ft_strrchr.c \
			src/str/ft_strstr.c \
			src/str/ft_strsub.c \
			src/str/ft_strtolower.c \
			src/str/ft_strtoupper.c \
			src/str/ft_strtrim.c \
			src/str/ft_substr.c \

SRC_UTIL =	src/util/ft_atoi.c \
			src/util/ft_countword.c \
			src/util/ft_isalnum.c \
			src/util/ft_isalpha.c \
			src/util/ft_isascii.c \
			src/util/ft_isdigit.c \
			src/util/ft_isprint.c \
			src/util/ft_iswhitespace.c \
			src/util/ft_itoa.c \
			src/util/ft_tolower.c \
			src/util/ft_toupper.c


OBJ =	$(SRC_MEM:.c=.o) $(SRC_OUT:.c=.o) $(SRC_STR:.c=.o) $(SRC_UTIL:.c=.o)

BONUSOBJ = $(SRC_LST:.c=.o)

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
