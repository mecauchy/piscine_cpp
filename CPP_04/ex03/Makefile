# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/17 13:13:18 by mcauchy-          #+#    #+#              #
#    Updated: 2025/08/22 11:00:36 by mcauchy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Materia

SRCS	=	Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			Character.cpp \
			AMateria.cpp \
			main.cpp

OBJS_DIR	=		objs

OBJS	=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

RED		=	\033[31m

RESET	=	\033[0m

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

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