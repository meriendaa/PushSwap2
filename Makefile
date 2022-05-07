# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmerida- <tmerida-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 17:03:19 by tmerida-          #+#    #+#              #
#    Updated: 2022/04/19 17:03:21 by tmerida-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

SRC = 	src/main.c \
		src/check_args_init.c\
		src/init_values.c \
		src/algo.c \
		src/rrr.c \
		src/pa.c \
		src/pb.c \
		src/ss.c \
		src/rr.c \
		src/utils.c \
		src/sort_5.c \
		src/big_algo.c \
		src/clone_utils.c

CC = gcc

CFLAG = -Wall -Wextra -Werror

INC = ./include/push_swap.h
NC=\033[0m
GREEN=\033[0;32m

OBJS = ${SRC:.c=.o}

all : ${NAME}

%.o:%.c ${INC}
	@${CC} ${CFLAG} -o $@ -c $<
	@echo "$@ created "

${NAME}: ${OBJS}
		@${MAKE} -C ./libft
		@${CC} ${OBJS} ${CFLAG} ./libft/libft.a -o ${NAME}
		@echo "$@ created "

clean:
		@rm -f ./src/*.o
		@make fclean -C ./libft
fclean: clean
		@rm -f ${NAME}
re: fclean all 

.PHONY: all clean fclean re
