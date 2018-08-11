# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/26 14:33:05 by pguthaus          #+#    #+#              #
#    Updated: 2018/08/11 03:11:33 by sungurea         ###   ########.fr        #
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

SRCS =		src/ft_bzero.c 	\
			src/ft_memccpy.c\
			src/ft_memchr.c \
			src/ft_memcpy.c \
			src/ft_memmove.c\
			src/ft_memset.c	\
			src/ft_memcmp.c \
			src/ft_atoi.c 	\
			src/ft_isalnum.c\
			src/ft_isalpha.c\
			src/ft_isascii.c\
			src/ft_isdigit.c\
			src/ft_isprint.c\
			src/ft_strcat.c \
			src/ft_strchr.c \
			src/ft_strcmp.c \
			src/ft_strcpy.c \
			src/ft_strdup.c \
			src/ft_strlcat.c\
			src/ft_strlen.c \
			src/ft_strncat.c\
			src/ft_strncmp.c\
			src/ft_strncpy.c\
			src/ft_strnstr.c\
			src/ft_strrchr.c\
			src/ft_strstr.c \
			src/ft_tolower.c\
			src/ft_toupper.c

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

re: fclean all

.PHONY: re fclean clean
