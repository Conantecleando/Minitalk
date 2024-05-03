# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 20:45:59 by daroldan          #+#    #+#              #
#    Updated: 2024/05/02 00:22:19 by daroldan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC = gcc -g 

CFLAGS = -Wall -Werror -Wextra

LIB = ar rcs

FILES = ft_isalpha.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_isalnum.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strchr.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_strnstr.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putstr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_printchar.c\
		ft_printf.c\
		ft_printhex.c\
		ft_printnumbers.c\

FILES_BONUS = 	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c\

OBJ = $(FILES:.c=.o)

OBJ_BONUS = $(FILES_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

bonus:
	$(CC) $(CFLAGS) -c $(FILES_BONUS)
	$(LIB) $(NAME) $(OBJ_BONUS)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)
	@echo "clean"

fclean: clean
	@rm -f $(NAME)
	@echo "Library clean"

re: fclean all

.PHONY: all clean fclean re bonus ftprint