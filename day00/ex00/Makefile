# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 22:30:55 by mpourrey          #+#    #+#              #
#    Updated: 2023/02/04 20:08:52 by mpourrey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
DEL			= /bin/rm -rf
OBJ_PATH	= ./obj

SRC			= megaphone.cpp

OBJ			= $(addprefix $(OBJ_PATH)/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJ_PATH) : $(OBJ_PATH)

$(OBJ_PATH)/%.o : %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(DEL) $(OBJ)
	@$(DEL) $(OBJ_PATH)

fclean : clean
	$(DEL) $(NAME)

re : fclean 
	$(MAKE) all

.PHONY = all clean fclean re