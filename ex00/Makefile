NAME = megaphone

all : ${NAME}

${NAME} : 
		c++ -Wall -Werror -Wextra *.cpp -o ${NAME}

clean : 
		echo "clean"

fclean :
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re
