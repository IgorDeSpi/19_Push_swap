/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:09:43 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/02 16:17:11 by ide-spir         ###   ########.fr       */
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
	int					content;
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
t_ps_list	*ft_ps_lstlast(t_ps_list *lst);
int			ft_p_lstsize(t_ps_list *lst);
void		ft_ps_lstadd_front(t_ps_list **lst, t_ps_list *new);
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
void		check_duplicate(t_ps_list *s);
int			init_push(int count, char **value, t_push *push);

//! sort.c
void		sort(t_push *push);
void		put_to_b(t_push *push, int s, int *k);
void		sort_over(t_push *push, int s);
void		sort_3(t_push *push);
void		sort_10(t_push *push);

//! utils.c
void		free_splitted(char **s);
void		print_instruction(short instruction);
void		put_to_a(t_push *push, int max, int uppermax);
int			add_to_a(int i, t_push *push);

//! sort_utils.c
int			is_sorted(t_ps_list *s);
int			get_index(t_ps_list *s, int n);
int			get_min(t_ps_list *s);
int			get_max(t_ps_list *s, long max);
int			get_closer(int upper, int lower, t_ps_list *s);

//! quick_sort.c
int			*sort_stack(t_ps_list *s);

#endif
