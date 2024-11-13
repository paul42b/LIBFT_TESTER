# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 12:26:33 by pbuchter          #+#    #+#              #
#    Updated: 2024/11/13 18:03:22 by pbuchter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the executable
NAME = test

# Paths
LIBFT_DIR = ../
SRC_DIR = ./srcs
INC_DIR = ./includes

# Standard and bonus source files
STD_SRCS = $(filter-out $(SRC_DIR)/lstmap_tester.c, $(wildcard $(SRC_DIR)/*.c))
BONUS_SRCS = $(SRC_DIR)/lstmap_tester.c

# Objects
STD_OBJS = $(STD_SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INC_DIR) -I $(LIBFT_DIR)

# Library
LIBFT = $(LIBFT_DIR)/libft.a

# Default rule
all: $(NAME) run

# Rule to build the executable (standard build)
$(NAME): $(STD_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(STD_OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# Rule to compile libft library
$(LIBFT):
	make -C $(LIBFT_DIR)

# Bonus rule (compiles with lstmap_tester.c)
bonus: CFLAGS += -DBONUS
bonus: fclean $(STD_OBJS) $(BONUS_OBJS) $(LIBFT)
	make bonus -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(STD_OBJS) $(BONUS_OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)
	$(MAKE) run  # Automatically run after bonus build

# Cleanup rules
clean:
	rm -f $(STD_OBJS) $(BONUS_OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

# Run the executable after building
run:
	./$(NAME)

.PHONY: all clean fclean re bonus run
