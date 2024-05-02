# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 19:28:00 by daroldan          #+#    #+#              #
#    Updated: 2024/05/03 01:45:20 by daroldan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME 		= server
NAMECLI		= client
#Directories

LIBFT		= ./LIBFT/libft.a

#Compiler and CFlags
CC			= gcc -g
CFLAGS		= -Wall -Werror -Wextra -I ./src
RM			=	rm -f


all:			$(NAME) $(NAMECLI)

$(NAME):		server.o
				$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(NAMECLI):		client.o
				$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAMECLI)

#Compile object files from source files


server.o: server.c
	make -C ./LIBFT
	$(CC) $(CFLAGS) -c $< -o $@
client.o: client.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
				@$(RM) -r server.o client.o
				@make clean -C ./LIBFT
				@echo "clean ok"

fclean:			clean
				@$(RM) $(NAME)
				@$(RM) $(NAMECLI)
				@make fclean -C ./LIBFT
				@echo "Library clean"

re: fclean clean all

.PHONY: all, clean, fclean, re	
