# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 15:57:30 by ide-spir          #+#    #+#              #
#    Updated: 2022/06/02 16:15:20 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = ft_ps_lst_0.c \
	   ft_ps_lst_1.c \
	   ft_push.c \
	   ft_reverse_rotate.c \
	   ft_rotate.c \
	   ft_swap.c \
	   init.c \
	   libft_0.c \
	   libft_1.c \
	   main.c \
	   quick_sort.c \
	   sort_utils.c \
	   sort.c \
	   utils.c

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

FLAGS = -Wall -Werror -Wextra

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o}


$(NAME): ${OBJS}
	@ar rc ${NAME} ${OBJS}

all: $(NAME)

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
