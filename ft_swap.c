/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:48:51 by ide-spir          #+#    #+#             */
/*   Updated: 2022/05/19 11:56:14 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_push *push)
{
	int	tmp;

	if (ft_d_lstsize(push->a) <= 1)
		return ;
	tmp = push->a->content;
	push->a->content = push->a->next->content;
	push->a->next->content = tmp;
	print_instruction(SA);
}

void	ft_sb(t_push *push)
{
	int	tmp;

	if (ft_d_lstsize(push->b) <= 1)
		return ;
	tmp = push->b->content;
	push->b->content = push->b->next->content;
	push->b->next->content = tmp;
	print_instruction(SB);
}
