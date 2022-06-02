/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:29:39 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/02 16:19:39 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_ps_list *s)
{
	int	i;

	if (!s)
		return (1);
	i = s->content;
	s = s->next;
	while (s)
	{
		if (i > s->content)
			return (0);
		i = s->content;
		s = s->next;
	}
	return (1);
}

int	get_index(t_ps_list *s, int n)
{
	int	i;

	i = 0;
	while (s)
	{
		if (n == s->content)
			return (i);
		s = s->next;
		i++;
	}
	return (i);
}

int	get_min(t_ps_list *s)
{
	int	i;

	if (!s)
		return (0);
	i = s->content;
	s = s->next;
	while (s)
	{
		if (i > s->content)
			i = s->content;
		s = s->next;
	}
	return (i);
}

int	get_max(t_ps_list *s, long max)
{
	int	i;
	int	x;
	int	j;

	if (!s)
		return (0);
	i = s->content;
	j = 0;
	x = 0;
	s = s->next;
	while (s)
	{
		if (i < s->content && max > s->content)
		{
			i = s->content;
			x = j;
		}
		s = s->next;
		j++;
	}
	return (i);
}

int	get_closer(int upper, int lower, t_ps_list *s)
{
	int	p;
	int	rupper;
	int	rlower;

	p = ft_p_lstsize(s) / 2;
	if (lower < p)
		rlower = lower;
	else
		rlower = ft_p_lstsize(s) - lower;
	if (upper < p)
		rupper = upper;
	else
		rupper = ft_p_lstsize(s) - upper;
	if (upper < 0)
		return (1);
	else if (lower < 0)
		return (0);
	if (rupper < rlower)
		return (0);
	else
		return (1);
}
