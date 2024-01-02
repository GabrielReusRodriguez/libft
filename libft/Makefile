NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
BIN_DIR=./bin

LIBFT_SRC_FILES=$(wildcard *.c)
LIBFT_OBJ_FILES=$(LIBFT_SRC_FILES:%.c=${BIN_DIR}/%.o)

all:${NAME}
	
${NAME}: ${LIBFT_OBJ_FILES}
	ar -rc ${NAME} ${LIBFT_OBJ_FILES}

${BIN_DIR}/%.o:%.c
	mkdir -p ${BIN_DIR}
	cc ${CFLAGS} -o $@ -c $^

clean:
	-rm -rf ${BIN_DIR}

fclean: clean 
	-rm ${NAME}
	
re: fclean all

.PHONY= all clean fclean re