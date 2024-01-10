# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 01:34:53 by greus-ro          #+#    #+#              #
#    Updated: 2024/01/09 20:27:52 by greus-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
BIN_DIR=.

SRC_FILES=$(wildcard *.c)

BONUS_SRC_FILES= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c   
BONUS_SRC_FILES+= ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
BONUS_SRC_FILES+= ft_lstmap.c
BONUS_OBJ_FILES=$(BONUS_SRC_FILES:%.c=${BIN_DIR}/%.o)

LIBFT_SRC_FILES=$(filter-out $(BONUS_SRC_FILES),$(SRC_FILES))
LIBFT_OBJ_FILES=$(LIBFT_SRC_FILES:%.c=${BIN_DIR}/%.o)

all:${NAME}
	
${NAME}: ${BIN_DIR} ${LIBFT_OBJ_FILES}
	ar -rc ${NAME} ${LIBFT_OBJ_FILES}

${BIN_DIR}:
	mkdir -p ${BIN_DIR}
	
${BIN_DIR}/%.o:%.c
	cc ${CFLAGS} -o $@ -c $^

clean:
	-rm -f ${BIN_DIR}/*.o

fclean: clean 
	-rm -f ${NAME}
	
re: fclean all

bonus: ${NAME} ${BONUS_OBJ_FILES}
	ar -rcs ${NAME} ${BONUS_OBJ_FILES}

.PHONY= all clean fclean re bonus