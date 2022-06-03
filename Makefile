# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 15:57:30 by ide-spir          #+#    #+#              #
#    Updated: 2022/06/03 15:17:32 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = src/ft_ps_lst_0.c \
	   src/ft_ps_lst_1.c \
	   src/ft_push.c \
	   src/ft_reverse_rotate.c \
	   src/ft_rotate.c \
	   src/ft_swap.c \
	   src/init.c \
	   src/libft_0.c \
	   src/libft_1.c \
	   src/main.c \
	   src/quick_sort.c \
	   src/sort_utils.c \
	   src/sort.c \
	   src/utils.c

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

FLAGS = -Wall -Werror -Wextra

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o}


$(NAME): ${OBJS}
	@${CC} ${OBJS} -o ${NAME}

all: $(NAME)

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
