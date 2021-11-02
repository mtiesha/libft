# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/26 17:42:35 by mtiesha           #+#    #+#             #
#   Updated: 2021/10/26 19:16:30 by mtiesha          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c	\
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c	\
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

SRCS_B = ft_lstnew_bonus.c

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

LIB = ar rcs

OBJ = ${SRCS:.c=.o}

CC = gcc

all : ${NAME}

${NAME} : ${OBJ} Makefile libft.h
	${LIB} ${NAME} ${OBJ}

${OBJ} : ${SRCS} libft.h Makefile
	${CC} ${CFLAGS} ${SRCS} -c

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : clean fclean all re
