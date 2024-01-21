# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 12:10:20 by lsampiet          #+#    #+#              #
#    Updated: 2024/01/20 21:17:53 by lsampiet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libftprintf.a

C_SOURCE= ./mandatory/srcs/ft_printf.c \
			./mandatory/srcs/ft_printf_utils.c \
			./mandatory/srcs/ft_printf_utils02.c \

C_BONUS= ./bonus/srcs/ft_printf_bonus.c \
			./bonus/srcs/ft_printf_utils_bonus.c \
			./bonus/srcs/ft_printf_utils02_bonus.c \
			./bonus/srcs/ft_printf_utils03_bonus.c \

HEADER_B= ./bonus/includes/ft_printf_bonus.h \

HEADER_M= ./mandatory/includes/ft_printf.h \

CHECK_M= $(shell ar -t $(NAME) $(C_OBJ) 2>/dev/null)

CHECK_B= $(shell ar -t $(NAME) $(BONUS_OBJ) 2>/dev/null)

C_OBJ= $(C_SOURCE:%.c=%.o)

BONUS_OBJ= $(C_BONUS:%.c=%.o)

CC= cc

C_FLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(if $(CHECK_B), fclean $(C_OBJ), $(C_OBJ))

bonus: $(if $(CHECK_M), fclean $(BONUS_OBJ), $(BONUS_OBJ))

$(BONUS_OBJ): %.o: %.c
	$(CC) $(C_FLAGS) -I $(HEADER_B) -c $< -o $@
	ar rcs $(NAME) $@

$(C_OBJ): %.o: %.c
	$(CC) $(C_FLAGS) -I $(HEADER_M) -c $< -o $@
	ar rcs $(NAME) $@


clean:
	rm -f $(C_OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
