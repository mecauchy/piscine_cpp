# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/02 09:38:11 by mcauchy-          #+#    #+#              #
#    Updated: 2025/07/02 14:39:07 by mcauchy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	megaphone

OBJ_DIR			=	obj/.

CC				=	g++

CFLAGS			=	-Wall -Wextra -Werror -std=c++98

SRC				=	./megaphone.cpp

OBJ				=	$(SRC:.cpp=.o)

RED				=	\033[1;31m

YELLOW			=	\033[1;33m

RESET			=	\033[0m

all				:	$(NAME)

$(NAME)			:	$(OBJ)
					@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o				:	%.c
					@$(CC) $(CFLAGS) -c $< -o $@
					@echo "$(YELLOW)cpp $(RESET): \e[92mCompiling\e[m $(notdir $<)...\n"

clean			:
					rm -rf $(OBJ)
					@echo "$(RED)- Objects deleted !$(RESET)"

fclean			:	clean
					@rm -rf $(NAME)
					@echo "$(RED)- Executable deleted !$(RESET)"

re				:	fclean all

.PHONY			:	all clean fclean re