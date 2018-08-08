# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/26 14:33:05 by pguthaus          #+#    #+#              #
#    Updated: 2018/08/03 17:19:10 by sungurea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CC = cc# C compiler
CFLAGS = -I ./include/ -Wall -Werror -Wextra# C compiler flags

RESET = \033[0m
PURPLE = \033[1;35m
GREEN = \033[1;32m
YELLOW = \033[1;33m

# Paths
# Paths

SRCS =		src/main.c		\


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CFLAGS)
clean:
	@echo "$(YELLOW)Deleting objects files...$(RESET)"
	@rm -rf $(OBJS)
	@echo "$(GREEN)Object files (based in 'src/') have been deleted !$(RESET)"

fclean: clean
	@echo "$(YELLOW)Deleting executable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)The executable '$(NAME)' has been deleted !$(RESET)"

licorne:
	@echo "$(PURPLE)Searching for the universal answer...$(RESET)"
	@echo "$(PURPLE)The answer is... Hmmmmm... Maybe... No... OHHHH !!! The answer is: $(RESET)"
	@echo "🦄 42"

re: fclean all

.PHONY: re licorne fclean clean
