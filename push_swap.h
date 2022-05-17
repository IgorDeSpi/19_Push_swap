/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:09:43 by ide-spir          #+#    #+#             */
/*   Updated: 2022/05/17 15:21:37 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

# define NO 0
# define SA 1
# define SB 2
# define SS 3
# define PA 4
# define PB 5
# define RA 6
# define RB 7
# define RR 8
# define RRA 9
# define RRB 10
# define RRR 11

typedef struct s_d_list
{
	int				content;
	struct s_d_list	*next;
	struct s_d_list	*prev;
}				t_d_list;

typedef struct s_push
{
	t_d_list	*a;
	t_d_list	*b;
}				t_push;

//! s_d_list_0.c

//! s_d_list_1.c

//! ft_rotate.c

//! ft_swap.c

//! ft_reverse_rotate.c

//! ft_push.c

//! libft0.c

//! libft1.c

//! init.c

//! sort.c

//! utils.c

//! sort_utils.c

//! quick_sort.c

#endif