NAME = megaphone
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
