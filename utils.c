/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:28:56 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/02 10:32:41 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_splitted(char *s)
{
	int	i;

	i = -1;
	while (s && s[++i])
		free(s[i]);
	free(s);
}

static void	put_str(short instruction)
{
	if (instruction == NO)
		return ;
	if (instruction == SA)
		ft_putstr_fd("sa\n", 1);
	if (instruction == SB)
		ft_putstr_fd("sb\n", 1);
	if (instruction == SS)
		ft_putstr_fd("sb\n", 1);
	if (instruction == PA)
		ft_putstr_fd("pa\n", 1);
	if (instruction == PB)
		ft_putstr_fd("pb\n", 1);
	if (instruction == RA)
		ft_putstr_fd("ra\n", 1);
	if (instruction == RB)
		ft_putstr_fd("rb\n", 1);
	if (instruction == RR)
		ft_putstr_fd("rr\n", 1);
	if (instruction == RRA)
		ft_putstr_fd("rra\n", 1);
	if (instruction == RRB)
		ft_putstr_fd("rrb\n", 1);
	if (instruction == RRR)
		ft_putstr_fd("rrr\n", 1);
}

void	print_instruction(short inst)
{
	static short	p_instr = NO;

	if ((inst == SA && p_instr == SB) || (inst == SB && p_instr == SA))
	{
		p_instr = SS;
		inst = NO;
	}
	if ((inst == RA && p_instr == RB) || (inst == RB && p_instr == RA))
	{
		p_instr = RR;
		inst = NO;
	}
	if ((inst == RRA && p_instr == RRB) || (inst == RRB && p_instr == RRA))
	{
		p_instr = RRR;
		inst = NO;
	}
	put_str(p_instr);
	p_instr = inst;
}

int	add_to_a(int i, t_push *push)
{
	int	p;

	if (ft_p_lstsize(push->a) >= 2 && (i == 1 || i == 0))
		if (push->a->content > push->a->next->content)
			ft_sa(push);
	p = ft_p_lstsize(push->b) / 2;
	if (i == 0)
	{
		ft_pa(push);
		return (1);
	}
	else if (i == 1)
	{
		ft_sb(push);
		ft_pa(push);
		return (1);
	}
	else if (i < p)
		ft_rb(push);
	else
		ft_rrb(push);
	return (0);
}

void	put_to_a(t_push *push, int max, int uppermax)
{
	int	upper;
	int	lower;
	int	n;

	n = 1;
	while (push->b)
	{
		uppermax = get_max(push->b, max + 1L);
		upper = get_index(push->b, uppermax);
		lower = get_index(push->b, get_max(push->b, uppermax));
		if (upper < 0 && lower < 0)
			break ;
		if (n && get_closer(upper, lower, push->b))
		{
			if (add_to_a(lower, push))
				n = 0;
		}
		else
		{
			if (add_to_a(upper, push))
				n = 1;
		}
	}
	if (ft_p_lstsize(push->a) >= 2 && push->a->content > push->a->next->content)
		ft_sa(push);
}
