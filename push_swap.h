/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:09:43 by ide-spir          #+#    #+#             */
/*   Updated: 2022/05/24 14:48:31 by ide-spir         ###   ########.fr       */
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

typedef struct s_ps_list
{
	int				content;
	struct s_ps_list	*next;
	struct s_ps_list	*prev;
}				t_ps_list;

typedef struct s_push
{
	t_ps_list	*a;
	t_ps_list	*b;
}				t_push;

//! ft_ps_lst_0.c
t_ps_list	*ft_ps_lstnew(int content);
t_ps_list	ft_ps_lstadd_front(t_ps_list **lst, t_ps_list *new);
t_ps_list	*ft_ps_lstlast(t_ps_list *lst);
int			ft_ps_lstsize(t_ps_list *lst);
void		ft_ps_lstadd_back(t_ps_list **lst, t_ps_list *new);

//! ft_ps_lst_1.c
void		ft_ps_lstdelone(t_ps_list *lst);
void		ft_ps_lstclear(t_ps_list **lst);
void		ft_ps_lstiter(t_ps_list *lst, void (*f)(int));
void		ft_ps_lstdelfront(t_ps_list **lst);
void		ft_ps_lstiter_back(t_ps_list *lst, void (*f)(int));

//! ft_rotate.c
void		ft_ra(t_push *push);
void		ft_rb(t_push *push);

//! ft_swap.c
void		ft_sa(t_push *push);
void		ft_sb(t_push *push);

//! ft_reverse_rotate.c
void		ft_rra(t_push *push);
void		ft_rrb(t_push *push);

//! ft_push.c
void		ft_pa(t_push *push);
void		ft_pb(t_push *push);

//! libft0.c
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
int			ft_atoi(const char *str);

//! libft1.c
char		**ft_split(char const *s, char c);

//! init.c
void		error(void);
int			init_push(int count, char **value, t_push *push);
void		check_duplicate(t_ps_list *s);

//! sort.c

//! utils.c
void	free_splitted(char *s);

//! sort_utils.c

//! quick_sort.c

#endif
