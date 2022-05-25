/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:28:56 by ide-spir          #+#    #+#             */
/*   Updated: 2022/05/24 15:10:59 by ide-spir         ###   ########.fr       */
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
