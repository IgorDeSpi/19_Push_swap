/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:48:40 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/02 10:31:44 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_push *push)
{
	t_ps_list	*front;
	t_ps_list	*tmp;

	if (ft_p_lstsize(push->a) > 1)
	{
		front = push->a;
		tmp = ft_ps_lstnew(front->content);
		ft_ps_lstadd_back(&(push->a), tmp);
		front->next->prev = NULL;
		push->a = push->a->next;
		ft_ps_lstdelone(front);
		print_instruction(RA);
	}
}

void	ft_rb(t_push *push)
{
	t_ps_list	*front;
	t_ps_list	*tmp;

	if (ft_p_lstsize(push->b) > 1)
	{
		front = push->b;
		tmp = ft_ps_lstnew(front->content);
		ft_ps_lstadd_back(&(push->b), tmp);
		front->next->prev = NULL;
		push->b = push->b->next;
		ft_ps_lstdelone(front);
		print_instruction(RB);
	}
}
