# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 09:33:41 by mcauchy-          #+#    #+#              #
#    Updated: 2025/08/12 09:33:42 by mcauchy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Fixed

SRCS	=	Fixed.cpp main.cpp

OBJS_DIR	=		objs

OBJS	=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

RED		=	\033[31m

RESET	=	\033[0m

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	/bin/rm -rf

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR)/%.o		:	%.cpp
			@mkdir -p $(OBJS_DIR)
			@echo "cpp $(RESET): \e[92mCompiling\e[m $(notdir $<)..."
			@$(CC) $(CFLAGS) -c $< -o $@

clean	:
			@$(RM) $(OBJS_DIR)
			@echo "$(RED)- Objects deleted !$(RESET)"

fclean	:	clean
			@$(RM) $(NAME)
			@echo "$(RED)- Executable deleted !$(RESET)"

re		:	fclean all

.PHONY	:	all clean fclean re