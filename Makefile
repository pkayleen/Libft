# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 18:18:12 by pkayleen          #+#    #+#              #
#    Updated: 2020/11/03 15:40:23 by pkayleen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
FLAG = -Wall -Wextra -Werror
OPTION = -c $(HEADER)
SRC = ft_atoi.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_tolower.c \
	  ft_toupper.c
OBJ = ft_atoi.o \
	  ft_isalnum.o \
	  ft_isalpha.o \
	  ft_isascii.o \
	  ft_isdigit.o \
	  ft_isprint.o \
	  ft_strlen.o \
	  ft_strncmp.o \
	  ft_tolower.o \
	  ft_toupper.o

c.o.:

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
re:	fclean all
