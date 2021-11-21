SRCS = srcs/*.cpp
INCS = includes
NAME = a.out
CC = c++ -Wall -Werror -Wextra

all : ${NAME}

${NAME} :
	${CC} -I${INCS} ${SRCS} -o ${NAME}

clean :
	echo "clean";

fclean :
	rm -rf ${NAME}

re : fclean all

.PHONY : clean fclean re bonus