/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:54:33 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/03 15:18:13 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_push *push)
{
	t_ps_list	*last;
	t_ps_list	*tmp;

	if (ft_p_lstsize(push->a) > 1)
	{
		last = ft_ps_lstlast(push->a);
		tmp = ft_ps_lstnew(last->content);
		last->prev->next = NULL;
		tmp->prev = NULL;
		ft_ps_lstadd_front(&(push->a), tmp);
		ft_ps_lstdelone(last);
		print_instruction(RRA);
	}
}

void	ft_rrb(t_push *push)
{
	t_ps_list	*last;
	t_ps_list	*tmp;

	if (ft_p_lstsize(push->b) > 1)
	{
		last = ft_ps_lstlast(push->b);
		tmp = ft_ps_lstnew(last->content);
		last->prev->next = NULL;
		tmp->prev = NULL;
		ft_ps_lstadd_front(&(push->b), tmp);
		ft_ps_lstdelone(last);
		print_instruction(RRB);
	}
}
