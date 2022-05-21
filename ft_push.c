/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:05:10 by ide-spir          #+#    #+#             */
/*   Updated: 2022/05/21 15:10:49 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_push *push)
{
	t_ps_list	*tmp;

	if (ft_ps_lstsize(push->b) == 0)
		return ;
	tmp = ft_ps_lstnew(push->b->content);
	ft_ps_lstadd_front(&(push->a), tmp);
	ft_ps_lstdelfront(&(push->b));
	print_instruction(PA);
}

void	ft_pb(t_push *push)
{
	t_ps_list	*tmp;

	if (ft_ps_lstsize(push->a) == 0)
		return ;
	tmp = ft_ps_lstnew(push->a->content);
	ft_ps_lstadd_front(&(push->b), tmp);
	ft_ps_lstdelfront(&(push->a));
	print_instruction(PB);
}
