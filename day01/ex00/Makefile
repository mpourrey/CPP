# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 17:27:08 by mpourrey          #+#    #+#              #
#    Updated: 2023/02/20 14:44:29 by mpourrey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
CC 			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
DEL			= /bin/rm -rf
OBJ_PATH	= ./obj

SRC			= main.cpp \
			  Zombie.cpp \
			  randomChump.cpp \
			  newZombie.cpp

OBJ			= $(addprefix $(OBJ_PATH)/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJ_PATH) :
	@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)/%.o : %.cpp | $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean :
	$(DEL) $(OBJ)
	@$(DEL) $(OBJ_PATH)

fclean : clean
	$(DEL) $(NAME)

re : fclean 
	$(MAKE) all

.PHONY = all clean fclean re