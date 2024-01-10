SRC_DIR=./src
OBJ_DIR=./obj 
BIN_DIR=./bin

CFLAGS=-Wall -Wextra -Werror
LIB_DIR=../libft/libft.a

SRC_FILES= $(wildcard *.c)
BIN_FILES= $(SRC_FILES:%.c=${BIN_DIR}/%.out)

#T_ATOI=test_atoi.out
#T_BZERO=test_atoi.out
#T_SPLIT=${BIN_DIR}/test_split.out
#T_ITOA=${BIN_DIR}/test_itoa.out


#all: ${T_ATOI} ${T_BZERO}
all: ${LIB_DIR} ${BIN_DIR} ${BIN_FILES} 

${BIN_DIR}:
	mkdir -p ${BIN_DIR}

${LIB_DIR}: 
	make all -C ../libft/
	
${BIN_DIR}/%.out:%.c
	cc ${CFLAGS} $^ ${LIB_DIR} -o $@

clean:
	-rm ${BIN_DIR}/*.out

fclean: clean
	-rm ./*.out

re: clean all

.PHONY: all re clean fclean