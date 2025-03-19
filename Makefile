# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 15:01:56 by zlee              #+#    #+#              #
#    Updated: 2025/03/19 22:14:50 by zlee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(CLIENT) $(SERVER)

CC = cc

CFLAGS = -Wall -Wextra -Werror

# MEM_CHECK = -fsanitize=address -fsanitize=undefined -g3

CLIENT = ./client

SERVER = ./server

CLIENT_FILE = ./src/client.c 

SERVER_FILE = ./src/server.c

all : $(NAME)


$(CLIENT) :$(CLIENT_FILE) 
	make -C libft all
	$(CC) $(CFLAGS) $(MEM_CHECK) $< libft/libft.a -o $@

$(SERVER) : $(SERVER_FILE)
	make -C libft all
	$(CC) $(CFLAGS) $(MEM_CHECK) $< libft/libft.a -o $@

clean :
	make -C libft clean

fclean :
	make -C libft fclean
	rm -f $(SERVER) $(CLIENT)
	
re: fclean all

.PHONY: all clean fclean re libft
