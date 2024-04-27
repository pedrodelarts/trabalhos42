# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 17:49:55 by pde-jesu          #+#    #+#              #
#    Updated: 2024/04/27 18:08:36 by pde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memcpy.c \
ft_strlcpy.c ft_memset.c ft_strncmp.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_strnstr.c ft_memchr.c ft_bzero.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strtrim.c ft_strjoin.c ft_strlcat.c ft_split.c ft_striteri.c ft_strmapi.c \

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rsc $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all