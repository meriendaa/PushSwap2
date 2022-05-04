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
		src/pars2.c \
		src/algo.c \
		src/rrr.c \
		src/pa.c \
		src/pb.c \
		src/ss.c \
		src/rr.c \
		src/utils.c \
		src/sort_5.c \
		src/big_algo.c 

CC = gcc

CFLAG = -Wall -Wextra -Werror

OBJS = ${SRC:.c=.o}

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
		@${MAKE} -C ./libft
		@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

clean:
		@${MAKE} -C ./libft fclean
		@${RM} ${OBJS}
fclean: clean
		@${RM} ${NAME}
re: fclean all 

.PHONY: all clean fclean re
