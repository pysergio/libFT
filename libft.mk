# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 23:06:42 by sungurea          #+#    #+#              #
#    Updated: 2018/08/27 14:45:38 by sungurea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Base variables for libft
# Use with 'include /path/to/libft.mk'
# Make sure to define L_FT with path to libft first

L_FT		?= .

NAME		:= libft.a

FT_LNK		:= -L $(L_FT) -l ft
FT_INC		:= -I $(L_FT)/includes
FT_LIB		:= $(L_FT)/$(NAME)

# Global variables for compilation
ifndef LIB_LNK
LIB_LNK		:= 
LIB_INC		:=
endif

LIB_LNK		+= $(FT_LNK)
LIB_INC		+= $(FT_INC)
