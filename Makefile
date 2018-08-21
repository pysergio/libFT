# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/26 14:33:05 by pguthaus          #+#    #+#              #
#    Updated: 2018/08/21 18:49:55 by sungurea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include libft.mk

SRC_DIR	= ./src
INC_DIR	= ./includes
OBJ_DIR	= ./obj

RAW_SRC	:= $(shell find $(SRC_DIR) -type f | grep -E "\.c$$")
RAW_DIRS:= $(shell find $(SRC_DIR) -mindepth 1 -type d)
SRCDIRS = $(RAW_DIRS:./src/%=%)
SRC		= $(RAW_SRC:./src/%=%)
OBJ		= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CC		= @gcc
CFLAGS	= -Wall -Wextra -Werror -std=c99
CFLAGS += -O3 -march=native -pipe -flto

.PHONY: all clean fclean re

RESET = \033[0m
PURPLE = \033[1;35m
GREEN = \033[1;32m
YELLOW = \033[1;33m

all: $(OBJ_DIR) $(FT_NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(addprefix $(OBJ_DIR)/,$(SRCDIRS))

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(FT_INC) -o $@ -c $<

$(FT_NAME): $(OBJ)
	@ar rc $(FT_NAME) $(OBJ)
	@ranlib $(FT_NAME)
	@echo "$(GREEN)The lib '$(FT_NAME)' has been created !$(RESET)"

clean:
	@echo "$(YELLOW)Deleting objects files...$(RESET)"
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN)Object files (based in '$(OBJ_DIR)') have been deleted !$(RESET)"

fclean: clean
	@echo "$(YELLOW)Deleting lib...$(RESET)"
	@rm -f $(FT_NAME)
	@echo "$(GREEN)The lib '$(FT_NAME)' has been deleted !$(RESET)"

re:
	$(MAKE) fclean --no-print-directory
	$(MAKE) all --no-print-directory
