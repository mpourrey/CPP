NAME		= phonebook
CC 			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
DEL			= /bin/rm -rf
#OBJ_PATH	= ./obj
SRC			= phonebook.cpp
OBJ			= $(SRC:.cpp =.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ 

%.o : %.cpp #| $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

# $(OBJ_PATH) : 
# 	@mkdir -p $(OBJ_PATH)

clean :
	$(DEL) $(OBJ)
#	$(DEL) $(OBJ_PATH)

fclean : clean
	$(DEL) $(NAME)

re : fclean 
	$(MAKE) all

.PHONY = all clean fclean re