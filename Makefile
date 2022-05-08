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

CFLAG += -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

LPATH = libft/libft.a

RM = rm -f



all : $(NAME) 

%.o:%.c
	@$(CC) $(CFLAG) -c $< -o $@

${NAME}: ${OBJS}
		@make -C libft/
		@${CC}  -o ${NAME} ${OBJS} ${LPATH} && echo "Created"

fcleanlib: cleanlib
	@make fclean -C libft/
cleanlib: 
	@make clean -C libft/

clean: cleanlib
	$(RM) $(OBJS)

fclean: fcleanlib clean
		$(RM) $(NAME)
re: fclean all 

.PHONY: all clean fclean re
