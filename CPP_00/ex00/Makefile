# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/02 09:38:11 by mcauchy-          #+#    #+#              #
#    Updated: 2025/07/31 15:11:51 by mcauchy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	megaphone

OBJ_DIR			=	obj/.

CC				=	c++

CFLAGS			=	-Wall -Wextra -Werror -std=c++98

SRC				=	megaphone.cpp

OBJ				=	$(SRC:.cpp=.o)

RED				=	\033[2;31m

RESET			=	\033[0m

all				:	$(NAME)

$(NAME)			:	$(OBJ)
					@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o				:	%.cpp
					@$(CC) $(CFLAGS) -c $< -o $@
					@echo "cpp $(RESET): \e[92mCompiling\e[m $(notdir $<)..."

clean			:
					@rm -rf $(OBJ)
					@echo "$(RED)- Objects deleted !$(RESET)"

fclean			:	clean
					@rm -rf $(NAME)
					@echo "$(RED)- Executable deleted !$(RESET)"

re				:	fclean all

.PHONY			:	all clean fclean re