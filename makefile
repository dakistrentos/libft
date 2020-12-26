# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Vtrentos <Vtrentos@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/23 17:58:52 by Vtrentos      #+#    #+#                  #
#    Updated: 2020/12/23 17:58:55 by Vtrentos      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
SRC_FILES = ft_strlen.c ft_strlcpy.c ft_isalpha.c \
	ft_memset.c ft_bzero.c ft_memccpy.c ft_memcpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c \
	ft_strnstr.c ft_strlcat.c ft_strncmp.c ft_strrchr.c \
	ft_atoi.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c

OBJ_FILES = $(SRC_FILES:.c=.o)
HEADER_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_BONUS = ${BONUS:.c=.o}

all: $(NAME)

$(NAME): $(OBJ_FILES) $(SRC_FILES)
	ar -rc $(NAME) $(OBJ_FILES)

$(OBJ_FILES): $(SRC_FILES)
	$(CC) $(CFLAGS) -c $(SRC_FILES)

bonus: ${OBJ_BONUS}
	ar -rc ${NAME} ${OBJ_BONUS}

$(OBJ_BONUS): $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)

clean:
	rm -f $(OBJ_FILES) ${OBJ_BONUS}

fclean: clean
	rm -f $(NAME) ${OBJ_BONUS}

re: fclean all

.PHONY: all clean fclean re
