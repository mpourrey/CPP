# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 20:51:01 by mpourrey          #+#    #+#              #
#    Updated: 2023/02/06 15:06:26 by mpourrey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= cerveau
CC 			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
DEL			= /bin/rm -rf
OBJ_PATH	= ./obj

SRC			= main.cpp

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